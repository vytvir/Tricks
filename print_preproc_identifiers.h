#ifndef _PREPROC_PRINT_H_
#define _PREPROC_PRINT_H_

#define EXAMPLE (128 << 24 | 64 << 16 | 32 << 8)

#if defined (__GNUC__)
#  define STR(x) #x
#  define XSTR(x) STR(x)
#  define PRINT_PREPROC(msg, val) _Pragma(message "" msg "" XSTR(val)
#elif (__ICCARM__)
#  error "Unknown"
#endif

#endif /* _PREPROC_PRINT_H_ */
