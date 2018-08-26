#include <gio/gio.h>

#if defined (__ELF__) && ( __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 6))
# define SECTION __attribute__ ((section (".gresource.string"), aligned (8)))
#else
# define SECTION
#endif

static const SECTION union { const guint8 data[1268]; const double alignment; void * const ptr;}  string_resource_data = { {
  0x47, 0x56, 0x61, 0x72, 0x69, 0x61, 0x6e, 0x74, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x18, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x28, 0x05, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
  0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
  0x05, 0x00, 0x00, 0x00, 0xfd, 0xdf, 0x93, 0x11, 
  0x02, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, 
  0x08, 0x00, 0x4c, 0x00, 0xb4, 0x00, 0x00, 0x00, 
  0xb8, 0x00, 0x00, 0x00, 0xd4, 0xb5, 0x02, 0x00, 
  0xff, 0xff, 0xff, 0xff, 0xb8, 0x00, 0x00, 0x00, 
  0x01, 0x00, 0x4c, 0x00, 0xbc, 0x00, 0x00, 0x00, 
  0xc0, 0x00, 0x00, 0x00, 0xc2, 0xaf, 0x89, 0x0b, 
  0x01, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x00, 
  0x04, 0x00, 0x4c, 0x00, 0xc4, 0x00, 0x00, 0x00, 
  0xc8, 0x00, 0x00, 0x00, 0xdf, 0x12, 0xda, 0x12, 
  0x04, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00, 
  0x0c, 0x00, 0x76, 0x00, 0xd8, 0x00, 0x00, 0x00, 
  0xe7, 0x04, 0x00, 0x00, 0x9c, 0xf1, 0x81, 0x16, 
  0x00, 0x00, 0x00, 0x00, 0xe7, 0x04, 0x00, 0x00, 
  0x08, 0x00, 0x4c, 0x00, 0xf0, 0x04, 0x00, 0x00, 
  0xf4, 0x04, 0x00, 0x00, 0x65, 0x78, 0x61, 0x6d, 
  0x70, 0x6c, 0x65, 0x2f, 0x04, 0x00, 0x00, 0x00, 
  0x2f, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
  0x63, 0x6f, 0x6d, 0x2f, 0x00, 0x00, 0x00, 0x00, 
  0x77, 0x69, 0x6e, 0x64, 0x6f, 0x77, 0x2e, 0x67, 
  0x6c, 0x61, 0x64, 0x65, 0x00, 0x00, 0x00, 0x00, 
  0x5a, 0x06, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x78, 0xda, 0xbd, 0x55, 0x4b, 0x6e, 0xdb, 0x30, 
  0x14, 0xdc, 0xe7, 0x14, 0x2c, 0xb7, 0x85, 0xad, 
  0xb8, 0xd9, 0x64, 0x21, 0x29, 0x40, 0x16, 0xf1, 
  0x01, 0xe2, 0xb6, 0x4b, 0x83, 0xa2, 0x9e, 0xec, 
  0x57, 0x33, 0xa4, 0x42, 0x52, 0x92, 0xbd, 0x6b, 
  0xd2, 0x02, 0x5d, 0xb4, 0x77, 0xe8, 0x15, 0x8a, 
  0xae, 0xf2, 0x01, 0xd2, 0x2b, 0x50, 0x37, 0x2a, 
  0x63, 0xd9, 0xb1, 0xdd, 0xd8, 0xb1, 0x5d, 0x14, 
  0xdd, 0xf1, 0x11, 0xc3, 0x79, 0xc3, 0xd1, 0xf0, 
  0x29, 0x3c, 0x19, 0x5f, 0x08, 0x52, 0x82, 0x36, 
  0xa8, 0x64, 0x44, 0x3b, 0xed, 0x43, 0x4a, 0x40, 
  0x72, 0x95, 0xa2, 0x1c, 0x44, 0xf4, 0x6d, 0xef, 
  0xac, 0x75, 0x4c, 0x4f, 0xe2, 0x83, 0xf0, 0x55, 
  0xab, 0x45, 0xba, 0x20, 0x41, 0x33, 0x0b, 0x29, 
  0xa9, 0xd0, 0x0e, 0xc9, 0x40, 0xb0, 0x14, 0xc8, 
  0x51, 0xbb, 0x73, 0xdc, 0x3e, 0x22, 0xad, 0x96, 
  0x07, 0xa1, 0xb4, 0xa0, 0x33, 0xc6, 0x21, 0x0e, 
  0x35, 0x5c, 0x16, 0xa8, 0xc1, 0x10, 0x81, 0x49, 
  0x44, 0x07, 0x76, 0xf4, 0x9a, 0x2e, 0xba, 0xf8, 
  0x33, 0x6f, 0x68, 0x10, 0x87, 0x2a, 0xf9, 0x00, 
  0xdc, 0x12, 0x2e, 0x98, 0x31, 0x11, 0xed, 0xda, 
  0x51, 0x0f, 0xc6, 0xf6, 0xb4, 0xc8, 0x32, 0xd0, 
  0x94, 0x60, 0x1a, 0x51, 0xeb, 0xeb, 0x64, 0x5a, 
  0x77, 0xd6, 0xe2, 0xdf, 0xa3, 0x4c, 0x55, 0xd5, 
  0x60, 0xab, 0xe9, 0xba, 0x43, 0xe3, 0x30, 0xd7, 
  0x2a, 0x07, 0x6d, 0x27, 0x44, 0xb2, 0x0b, 0x88, 
  0x28, 0x67, 0xb2, 0x9f, 0x29, 0x5e, 0x18, 0x1a, 
  0x9f, 0x31, 0x61, 0x20, 0x0c, 0xe6, 0x80, 0x38, 
  0xe4, 0x43, 0x14, 0xe9, 0x1a, 0xe2, 0x53, 0x35, 
  0x6e, 0x58, 0x13, 0x35, 0x5e, 0x43, 0x59, 0xa2, 
  0xc1, 0x44, 0x00, 0x8d, 0x7b, 0xba, 0x58, 0xe1, 
  0xdb, 0xa3, 0xf5, 0x1f, 0x50, 0xa5, 0x11, 0xa4, 
  0x65, 0xd6, 0x1b, 0x44, 0x63, 0xef, 0x94, 0x45, 
  0xce, 0xc4, 0x4e, 0x52, 0x0b, 0x6b, 0xfd, 0x99, 
  0x46, 0xed, 0x74, 0xbd, 0x46, 0xb0, 0x60, 0x09, 
  0x08, 0x4a, 0xac, 0x66, 0xd2, 0x08, 0x66, 0x99, 
  0x17, 0x1f, 0xd1, 0x09, 0x78, 0x5d, 0xee, 0xbb, 
  0x7b, 0x70, 0xf7, 0xf5, 0xa7, 0xfa, 0x8b, 0xbb, 
  0xa9, 0xaf, 0xeb, 0x6f, 0xa4, 0xbe, 0x72, 0xbf, 
  0xfc, 0xf2, 0xca, 0x6f, 0xdf, 0x91, 0xfa, 0xb3, 
  0xfb, 0xe1, 0x6e, 0xdd, 0xbd, 0x2f, 0x7e, 0x12, 
  0x77, 0x43, 0xdc, 0x43, 0x7d, 0xed, 0xee, 0xea, 
  0x8f, 0xf5, 0xd7, 0x29, 0xd6, 0x6f, 0x76, 0x81, 
  0xc9, 0xc9, 0x0b, 0xf7, 0xfa, 0x0b, 0xab, 0xb6, 
  0x20, 0x35, 0x70, 0xc0, 0x12, 0x4c, 0x3f, 0x85, 
  0x8c, 0x15, 0xc2, 0x3e, 0x3f, 0x60, 0x70, 0x20, 
  0x99, 0x98, 0xc1, 0x19, 0xb7, 0x58, 0xfa, 0xd4, 
  0x52, 0x32, 0x64, 0x32, 0x15, 0xa0, 0xbd, 0xd7, 
  0xb2, 0x3f, 0x73, 0xaa, 0xcf, 0x05, 0xf2, 0x11, 
  0xa4, 0x94, 0x98, 0x8a, 0xe5, 0x39, 0x78, 0x0f, 
  0xa5, 0x7a, 0x8c, 0xda, 0x0a, 0xc5, 0x13, 0x68, 
  0x1f, 0x86, 0xa0, 0xf9, 0x52, 0x5e, 0x3e, 0xe3, 
  0x23, 0xff, 0x9a, 0x9e, 0xdd, 0x03, 0xc6, 0xb9, 
  0xa7, 0xdb, 0x9e, 0x8c, 0x0c, 0x85, 0xd8, 0x6a, 
  0x4a, 0xae, 0x0c, 0x36, 0xd9, 0x39, 0x5c, 0x46, 
  0x05, 0x4f, 0xcd, 0x83, 0x59, 0x7e, 0x36, 0xc5, 
  0xe8, 0x9c, 0x6b, 0x25, 0x04, 0xa4, 0xcb, 0x4f, 
  0xca, 0xcc, 0xf6, 0x36, 0x3e, 0xad, 0x7f, 0xff, 
  0x71, 0xcd, 0x90, 0xf9, 0x56, 0x7d, 0x3b, 0xc9, 
  0x3d, 0x2b, 0xca, 0x5d, 0x1e, 0xc0, 0xe3, 0xd0, 
  0x78, 0x87, 0x50, 0x2d, 0x46, 0x46, 0xe9, 0xab, 
  0xff, 0xa2, 0xb6, 0x99, 0x4d, 0x34, 0x5e, 0x9a, 
  0x53, 0x2b, 0xee, 0xcf, 0x23, 0x30, 0x37, 0x7f, 
  0xe7, 0x4c, 0x6c, 0xe9, 0xbb, 0x67, 0x24, 0x3a, 
  0x2f, 0x47, 0x62, 0xb3, 0xcc, 0x3d, 0x06, 0xf4, 
  0x74, 0xa0, 0x07, 0x8b, 0x3f, 0xc0, 0xc1, 0x6f, 
  0x5c, 0x1f, 0x5d, 0x8c, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x28, 0x75, 0x75, 0x61, 0x79, 0x29, 0x59, 
  0x6f, 0x75, 0x72, 0x41, 0x70, 0x70, 0x2f, 0x00, 
  0x03, 0x00, 0x00, 0x00
} };

static GStaticResource static_resource = { string_resource_data.data, sizeof (string_resource_data.data), NULL, NULL, NULL };
extern GResource *string_get_resource (void);
GResource *string_get_resource (void)
{
  return g_static_resource_get_resource (&static_resource);
}
/*
  If G_HAS_CONSTRUCTORS is true then the compiler support *both* constructors and
  destructors, in a sane way, including e.g. on library unload. If not you're on
  your own.

  Some compilers need #pragma to handle this, which does not work with macros,
  so the way you need to use this is (for constructors):

  #ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
  #pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(my_constructor)
  #endif
  G_DEFINE_CONSTRUCTOR(my_constructor)
  static void my_constructor(void) {
   ...
  }

*/

#ifndef __GTK_DOC_IGNORE__

#if  __GNUC__ > 2 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 7)

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR(_func) static void __attribute__((constructor)) _func (void);
#define G_DEFINE_DESTRUCTOR(_func) static void __attribute__((destructor)) _func (void);

#elif defined (_MSC_VER) && (_MSC_VER >= 1500)
/* Visual studio 2008 and later has _Pragma */

#define G_HAS_CONSTRUCTORS 1

/* We do some weird things to avoid the constructors being optimized
 * away on VS2015 if WholeProgramOptimization is enabled. First we
 * make a reference to the array from the wrapper to make sure its
 * references. Then we use a pragma to make sure the wrapper function
 * symbol is always included at the link stage. Also, the symbols
 * need to be extern (but not dllexport), even though they are not
 * really used from another object file.
 */

/* We need to account for differences between the mangling of symbols
 * for Win32 (x86) and x64 programs, as symbols on Win32 are prefixed
 * with an underscore but symbols on x64 are not.
 */
#ifdef _WIN64
#define G_MSVC_SYMBOL_PREFIX ""
#else
#define G_MSVC_SYMBOL_PREFIX "_"
#endif

#define G_DEFINE_CONSTRUCTOR(_func) G_MSVC_CTOR (_func, G_MSVC_SYMBOL_PREFIX)
#define G_DEFINE_DESTRUCTOR(_func) G_MSVC_DTOR (_func, G_MSVC_SYMBOL_PREFIX)

#define G_MSVC_CTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _wrapper(void) { _func(); g_slist_find (NULL,  _array ## _func); return 0; } \
  __pragma(comment(linker,"/include:" _sym_prefix # _func "_wrapper")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _wrapper;

#define G_MSVC_DTOR(_func,_sym_prefix) \
  static void _func(void); \
  extern int (* _array ## _func)(void);              \
  int _func ## _constructor(void) { atexit (_func); g_slist_find (NULL,  _array ## _func); return 0; } \
   __pragma(comment(linker,"/include:" _sym_prefix # _func "_constructor")) \
  __pragma(section(".CRT$XCU",read)) \
  __declspec(allocate(".CRT$XCU")) int (* _array ## _func)(void) = _func ## _constructor;

#elif defined (_MSC_VER)

#define G_HAS_CONSTRUCTORS 1

/* Pre Visual studio 2008 must use #pragma section */
#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _wrapper(void) { _func(); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (*p)(void) = _func ## _wrapper;

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  section(".CRT$XCU",read)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void); \
  static int _func ## _constructor(void) { atexit (_func); return 0; } \
  __declspec(allocate(".CRT$XCU")) static int (* _array ## _func)(void) = _func ## _constructor;

#elif defined(__SUNPRO_C)

/* This is not tested, but i believe it should work, based on:
 * http://opensource.apple.com/source/OpenSSL098/OpenSSL098-35/src/fips/fips_premain.c
 */

#define G_HAS_CONSTRUCTORS 1

#define G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA 1
#define G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA 1

#define G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(_func) \
  init(_func)
#define G_DEFINE_CONSTRUCTOR(_func) \
  static void _func(void);

#define G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(_func) \
  fini(_func)
#define G_DEFINE_DESTRUCTOR(_func) \
  static void _func(void);

#else

/* constructors not supported for this compiler */

#endif

#endif /* __GTK_DOC_IGNORE__ */

#ifdef G_HAS_CONSTRUCTORS

#ifdef G_DEFINE_CONSTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_CONSTRUCTOR_PRAGMA_ARGS(resource_constructor)
#endif
G_DEFINE_CONSTRUCTOR(resource_constructor)
#ifdef G_DEFINE_DESTRUCTOR_NEEDS_PRAGMA
#pragma G_DEFINE_DESTRUCTOR_PRAGMA_ARGS(resource_destructor)
#endif
G_DEFINE_DESTRUCTOR(resource_destructor)

#else
#warning "Constructor not supported on this compiler, linking in resources will not work"
#endif

static void resource_constructor (void)
{
  g_static_resource_init (&static_resource);
}

static void resource_destructor (void)
{
  g_static_resource_fini (&static_resource);
}
