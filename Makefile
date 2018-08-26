CC = gcc -std=gnu99
PKGCONFIG = $(shell which pkg-config)
CFLAGS = $(shell $(PKGCONFIG) --cflags gio-2.0 gtk+-3.0) -rdynamic -O3
LIBS = $(shell $(PKGCONFIG) --libs gio-2.0 gtk+-3.0 gmodule-2.0 epoxy) -lm 
GLIB_COMPILE_RESOURCES = $(shell $(PKGCONFIG) --variable=glib_compile_resources gio-2.0)

SRC = $(wildcard *.c)
GEN = gresources.c
BIN = manager.elf

ALL = $(GEN) $(SRC)
OBJS = $(ALL:.c=.o)

all: $(BIN)

gresources.c: string.gresource.xml $(shell $(GLIB_COMPILE_RESOURCES) --sourcedir=. --generate-dependencies string.gresource.xml)
	$(GLIB_COMPILE_RESOURCES) string.gresource.xml --target=$@ --sourcedir=. --generate-source

%.o: %.c
	$(CC) $(CFLAGS) -c -o $(@F) $<

$(BIN): $(OBJS)
	$(CC) -o $(@F) $(OBJS) $(LIBS)

clean:
	@rm -f $(GEN) $(OBJS) $(BIN)
