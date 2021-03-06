#include <stdlib.h>
#include <gtk/gtk.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <time.h>
#include <dirent.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
#include <pthread.h>

typedef struct{
char **files;
char **dirs;
int filecount;
int dircount;
int filemem;
int dirmem;
int DirExploreCount; //количество каталогов, которые просмотрены
char path[1024];
}catalog;

 GtkWidget *win;
GtkApplication *app;
GtkTextView *textview1; ///список файлов
GtkTextView *textview2; ///логи компиляции
GtkTextBuffer *textbuffer1;
GtkButton *button1;
GString *command=NULL;
catalog *catalog_common;


void data_init(void)
{
    GtkBuilder *builder;
    GError *error = NULL;

    builder = gtk_builder_new();
    if (!gtk_builder_add_from_resource (builder, "/com/example/YourApp/window.glade", &error))
    {
        // загрузить файл не удалось
        g_critical ("Не могу загрузить файл: %s", error->message);
        g_error_free (error);
    }

    gtk_builder_connect_signals (builder, NULL);
    win=GTK_WIDGET(gtk_builder_get_object(builder, "window1"));
    textview1=GTK_TEXT_VIEW(gtk_builder_get_object(builder, "textview1"));
    textview2=GTK_TEXT_VIEW(gtk_builder_get_object(builder, "textview2"));
    textbuffer1=GTK_TEXT_BUFFER(gtk_builder_get_object(builder, "textbuffer1"));
    button1=GTK_BUTTON(gtk_builder_get_object(builder, "button1"));
    gtk_widget_realize (win);
    gtk_widget_show(win);
    g_object_unref(builder);
}

void application_activate (GApplication *application, gpointer user_data)
{
    gtk_application_add_window(app, GTK_WINDOW(win));
}

void application_shutdown (GApplication *application, gpointer user_data)
{
	
}

catalog* new_catalog(void)
{
	catalog *catalog1=calloc(1,sizeof(catalog));
	catalog1->dircount=0;
	catalog1->filecount=0;
	catalog1->filemem=10;
	catalog1->dirmem=10;
	catalog1->dirs=(char**)calloc(catalog1->dirmem,sizeof(char*));
	catalog1->files=(char**)calloc(catalog1->filemem,sizeof(char*));
	catalog1->DirExploreCount=0;
	return catalog1;
}

void catalog_free(catalog *catalog1)
{
	int i=0;
	for(;i<catalog1->filecount;++i)
		free(catalog1->files[i]);
	i=0;
	for(;i<catalog1->dircount;++i)
		free(catalog1->dirs[i]);
	free(catalog1->dirs);
	free(catalog1->files);
	free(catalog1);
}

void add_dir_to_catalog(catalog *catalog1,const char *restrict path,const char *restrict dir)
{
	int dircount;
	int dirmem;
	char **dirs;
start:
	dircount=catalog1->dircount;
	dirmem=catalog1->dirmem;
	dirs=catalog1->dirs;
	if(dircount<dirmem-2)
	{
		dirs[dircount]=(char*)calloc(1024,sizeof(char*));
		dirs[dircount]=strcpy(dirs[dircount], path);
		dirs[dircount]=strcat(dirs[dircount], "/");
		dirs[dircount]=strcat(dirs[dircount], dir);
		++catalog1->dircount;
	}
	else
	{
		catalog1->dirs=realloc(catalog1->dirs,(dirmem+10)*sizeof(char**));
		dirmem+=10;
		catalog1->dirmem=dirmem;
		goto start;
	}
	
}

void add_file_to_catalog(catalog *catalog1, const char *restrict path, const char *restrict file)
{
	int filecount;
	int filemem;
	char **files;
start:
	filecount=catalog1->filecount;
	filemem=catalog1->filemem;
	files=catalog1->files;
	if(filecount<filemem-2)
	{
		files[filecount]=(char*)calloc(1024,sizeof(char*));
		files[filecount]=strcpy(files[filecount], file);
		
		files[filecount]=strcpy(files[filecount], path);
		files[filecount]=strcat(files[filecount], "/");
		files[filecount]=strcat(files[filecount], file);
		++catalog1->filecount;
	}
	else
	{
		catalog1->files=realloc(catalog1->files,(filemem+10)*sizeof(char**));
		filemem+=10;
		catalog1->filemem=filemem;
		goto start;
	}
}

//добавляет файлы и дируктории в структуру
void add_elements_to_catalog(catalog *catalog1,char *path)
{
  DIR       *d;
  struct dirent *dir;
  
  d = opendir(path);
	if (d)
	{ 
		bool rule1=FALSE;
		bool rule2=FALSE;
		bool rule3=FALSE;
		bool rule4=FALSE;
		bool rule5=FALSE;
		bool rule6=FALSE;
		while ((dir = readdir(d)) != NULL)
		{   
			rule1=(dir->d_type==DT_REG);
			rule2=((dir->d_name)[strlen(dir->d_name)-1]=='h');
			rule3=((dir->d_name)[strlen(dir->d_name)-2]=='.');
			rule4=((dir->d_name)[strlen(dir->d_name)-1]=='c');
			rule5=(dir->d_type==DT_DIR);
			rule6=((dir->d_name)[strlen(dir->d_name)-1]=='.');
			if(rule1&&(rule2||rule4)&&rule3)
			{
				//printf("filename=%s\n", dir->d_name);
				add_file_to_catalog(catalog1,path,dir->d_name);
			}
			if(rule5&&!rule6)
			{
				//printf("dirname=%s|%lu\n",dir->d_name,sizeof(dir->d_name));
				add_dir_to_catalog(catalog1,path,dir->d_name);
			}
		}
    closedir(d);
	}
}

void* geany_start(void *args)
{
	int i=0;
	command=g_string_new("geany --new-instance ");
	while(i<catalog_common->filecount)
	{
		command=g_string_append(command,catalog_common->files[i]);
		command=g_string_append(command," ");
		i++;
	}
	system(command->str);
	printf(command->str);
	g_string_free(command,TRUE);
	catalog_free(catalog_common);
}

gboolean on_button1_clicked (GtkButton *widget, gpointer   user_data)
{
int i=0;
catalog *catalog1=catalog_common;
add_elements_to_catalog(catalog1,catalog1->path);
catalog1->DirExploreCount=0;
while(catalog1->DirExploreCount<catalog1->dircount)
{
	add_elements_to_catalog(catalog1,catalog1->dirs[catalog1->DirExploreCount]);
	++catalog1->DirExploreCount;
}
i=catalog1->filecount;
while(i>0)
{	
	--i;
	printf("file=%s\n",catalog1->files[i]);
}
i=0;
GtkTextIter iter;
gtk_text_buffer_get_start_iter(textbuffer1,&iter);
while(i<catalog1->filecount)
{
	gtk_text_buffer_insert(textbuffer1,&iter,catalog1->files[i],-1);
	gtk_text_buffer_insert(textbuffer1,&iter,"\n",-1);
	gtk_text_iter_forward_line(&iter);
	i++;
}
pthread_t thread;
pthread_create(&thread, NULL, geany_start, NULL);
return FALSE;
}

void get_real_path(char *argv0)
{
	char* result=calloc(1024,sizeof(char));
	char* cwd=calloc(1024,sizeof(char));
	getcwd(cwd, 1024);
	int i=0;
	while(argv0[i]!='\0'&&i<1024)
	++i;
	while(argv0[i]!='/'&&i>0)
	--i;
	result[i]='\0';
	while(i>0)
	{
	--i;
	result[i]=argv0[i];	
	}
	/*alex@alex-System-Product-Name:~/project_manager$ ./manager.elf
	argv[0]=./manager.elf
	path=/home/alex/project_manager*/
	if(strlen(result)<=strlen(cwd))  //путь слишком короткий
	{
		free(result); 
		strcpy(catalog_common->path,cwd);
		printf("path_cwd=%s\n",cwd);
		free(cwd);}
	else
	{
		/*alex@alex-System-Product-Name:/home$ '/home/alex/project_manager/manager.elf' 
		argv[0]=/home/alex/project_manager/manager.elf
		path=/home*/
		free(cwd);
		strcpy(catalog_common->path,result);
		printf("path_result=%s\n",result);
		free(result);
	}
}

int main (int argc, char *argv[])
{
    gint res;
    char cwd[1024];
	getcwd(cwd, sizeof(cwd));
	catalog_common=new_catalog();
	get_real_path(argv[0]);
    gtk_init (&argc, &argv);
    /*Создание объекта приложения*/
    app = gtk_application_new("org.gtk.GWhois", G_APPLICATION_FLAGS_NONE);
    data_init();
    /*Установка обработчиков основных сигналов объекта приложения*/
    g_signal_connect(app, "activate", G_CALLBACK(application_activate), NULL);
    g_signal_connect(app, "shutdown", G_CALLBACK(application_shutdown) , NULL);
    /*Запуск основного цикла обработки событий приложения*/
    res = g_application_run(G_APPLICATION(app), 0, NULL);
    return res;
}

