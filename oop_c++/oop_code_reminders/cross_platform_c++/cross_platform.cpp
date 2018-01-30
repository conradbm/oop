#define OS_WINDOWS (defined(_WIN32) || defined(_WIN64) || defined(__TOS_WIN__) ...)
#define OS_MAC (defined(Macintosh) || defined(machintosh) || defined(__APPLE__) || defined(__MACH__) ...)
#define OS_LINUX (defined(linux) ...)
#include "configure.h" // defines OS_WINDOWS, etc.
#ifdef OS_WINDOWS
   // Windows-specific stuff here.
#elif OS_MAC
   // Mac-specific stuff here.
#elif OS_LINUX
   // Linux-specific stuff here.
#else
   // error, invalid operating system
#endif