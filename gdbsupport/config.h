/* config.h.  Generated from config.in by configure.  */
/* config.in.  Generated from configure.ac by autoheader.  */

/* Define to one of `_getb67', `GETB67', `getb67' for Cray-2 and Cray-YMP
   systems. This function is required for `alloca.c' support on those systems.
   */
/* #undef CRAY_STACKSEG_END */

/* Define to 1 if std::thread works. */
/* #undef CXX_STD_THREAD */

/* Define to 1 if using `alloca.c'. */
/* #undef C_ALLOCA */

/* Define if development-mode features are enabled. */
/* #undef DEVELOPMENT */

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#define ENABLE_NLS 1

/* Define if self-testing features should be enabled */
#define GDB_SELF_TEST 1

/* Define to 1 if you have `alloca', as a function or macro. */
#define HAVE_ALLOCA 1

/* Define to 1 if you have <alloca.h> and it should be used (not on Ultrix).
   */
#define HAVE_ALLOCA_H 1

/* define if the compiler supports basic C++11 syntax */
#define HAVE_CXX11 1

/* Define to 1 if you have the declaration of `ADDR_NO_RANDOMIZE', and to 0 if
   you don't. */
#define HAVE_DECL_ADDR_NO_RANDOMIZE 0

/* Define to 1 if you have the declaration of `asprintf', and to 0 if you
   don't. */
#define HAVE_DECL_ASPRINTF 0

/* Define to 1 if you have the declaration of `basename(char *)', and to 0 if
   you don't. */
#define HAVE_DECL_BASENAME 0

/* Define to 1 if you have the declaration of `ffs', and to 0 if you don't. */
#define HAVE_DECL_FFS 0

/* Define to 1 if you have the declaration of `snprintf', and to 0 if you
   don't. */
#define HAVE_DECL_SNPRINTF 1

/* Define to 1 if you have the declaration of `strstr', and to 0 if you don't.
   */
#define HAVE_DECL_STRSTR 1

/* Define to 1 if you have the declaration of `strtol', and to 0 if you don't.
   */
#define HAVE_DECL_STRTOL 1

/* Define to 1 if you have the declaration of `strtoll', and to 0 if you
   don't. */
#define HAVE_DECL_STRTOLL 1

/* Define to 1 if you have the declaration of `strtoul', and to 0 if you
   don't. */
#define HAVE_DECL_STRTOUL 1

/* Define to 1 if you have the declaration of `strtoull', and to 0 if you
   don't. */
#define HAVE_DECL_STRTOULL 1

/* Define to 1 if you have the declaration of `strverscmp', and to 0 if you
   don't. */
#define HAVE_DECL_STRVERSCMP 0

/* Define to 1 if you have the declaration of `vasprintf', and to 0 if you
   don't. */
#define HAVE_DECL_VASPRINTF 0

/* Define to 1 if you have the declaration of `vsnprintf', and to 0 if you
   don't. */
#define HAVE_DECL_VSNPRINTF 1

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define if <sys/procfs.h> has elf_fpregset_t. */
/* #undef HAVE_ELF_FPREGSET_T */

/* Define to 1 if you have the `fdwalk' function. */
/* #undef HAVE_FDWALK */

/* Define to 1 if you have the `fork' function. */
/* #undef HAVE_FORK */

/* Define if <sys/procfs.h> has fpregset_t. */
/* #undef HAVE_FPREGSET_T */

/* Define to 1 if you have the `getauxval' function. */
/* #undef HAVE_GETAUXVAL */

/* Define to 1 if you have the `getpagesize' function. */
#define HAVE_GETPAGESIZE 1

/* Define to 1 if you have the `getrlimit' function. */
/* #undef HAVE_GETRLIMIT */

/* Define to 1 if you have the `getrusage' function. */
/* #undef HAVE_GETRUSAGE */

/* Define if <sys/procfs.h> has gregset_t. */
/* #undef HAVE_GREGSET_T */

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* Define to 1 if you have the `kinfo_getfile' function. */
/* #undef HAVE_KINFO_GETFILE */

/* Define if you have <langinfo.h> and nl_langinfo(CODESET). */
/* #undef HAVE_LANGINFO_CODESET */

/* Define if you have the ipt library. */
/* #undef HAVE_LIBIPT */

/* Define to 1 if you have the <linux/elf.h> header file. */
/* #undef HAVE_LINUX_ELF_H */

/* Define to 1 if you have the <linux/perf_event.h> header file. */
/* #undef HAVE_LINUX_PERF_EVENT_H */

/* Define to 1 if you have the <locale.h> header file. */
#define HAVE_LOCALE_H 1

/* Define to 1 if the system has the type `long long'. */
#define HAVE_LONG_LONG 1

/* Define if <sys/procfs.h> has lwpid_t. */
/* #undef HAVE_LWPID_T */

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have a working `mmap' system call. */
/* #undef HAVE_MMAP */

/* Define to 1 if you have the `pipe' function. */
/* #undef HAVE_PIPE */

/* Define to 1 if you have the `pipe2' function. */
/* #undef HAVE_PIPE2 */

/* Define to 1 if you have the `poll' function. */
/* #undef HAVE_POLL */

/* Define to 1 if you have the <poll.h> header file. */
/* #undef HAVE_POLL_H */

/* Define if <sys/procfs.h> has prfpregset_t. */
/* #undef HAVE_PRFPREGSET_T */

/* Define if <sys/procfs.h> has prgregset32_t. */
/* #undef HAVE_PRGREGSET32_T */

/* Define if <sys/procfs.h> has prgregset_t. */
/* #undef HAVE_PRGREGSET_T */

/* Define to 1 if you have the <proc_service.h> header file. */
/* #undef HAVE_PROC_SERVICE_H */

/* Define if <sys/procfs.h> has psaddr_t. */
/* #undef HAVE_PSADDR_T */

/* Have PTHREAD_PRIO_INHERIT. */
/* #undef HAVE_PTHREAD_PRIO_INHERIT */

/* Define to 1 if you have the `pthread_setname_np' function. */
/* #undef HAVE_PTHREAD_SETNAME_NP */

/* Define to 1 if you have the `pthread_sigmask' function. */
/* #undef HAVE_PTHREAD_SIGMASK */

/* Define to 1 if you have the `ptrace64' function. */
/* #undef HAVE_PTRACE64 */

/* Define to 1 if you have the <ptrace.h> header file. */
/* #undef HAVE_PTRACE_H */

/* Define to 1 if you have the `pt_insn_event' function. */
/* #undef HAVE_PT_INSN_EVENT */

/* Define to 1 if you have the `sbrk' function. */
/* #undef HAVE_SBRK */

/* Define to 1 if you have the `setns' function. */
/* #undef HAVE_SETNS */

/* Define to 1 if you have the `setpgid' function. */
/* #undef HAVE_SETPGID */

/* Define to 1 if you have the `setpgrp' function. */
/* #undef HAVE_SETPGRP */

/* Define to 1 if you have the `sigaction' function. */
/* #undef HAVE_SIGACTION */

/* Define to 1 if you have the `sigaltstack' function. */
/* #undef HAVE_SIGALTSTACK */

/* Define to 1 if you have the <signal.h> header file. */
#define HAVE_SIGNAL_H 1

/* Define to 1 if you have the `sigprocmask' function. */
/* #undef HAVE_SIGPROCMASK */

/* Define if sigsetjmp is available. */
/* #undef HAVE_SIGSETJMP */

/* Define to 1 if you have the `sigtimedwait' function. */
/* #undef HAVE_SIGTIMEDWAIT */

/* Define to 1 if you have the `socketpair' function. */
/* #undef HAVE_SOCKETPAIR */

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if `enabled' is a member of `struct pt_insn'. */
/* #undef HAVE_STRUCT_PT_INSN_ENABLED */

/* Define to 1 if `resynced' is a member of `struct pt_insn'. */
/* #undef HAVE_STRUCT_PT_INSN_RESYNCED */

/* Define to 1 if `st_blksize' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BLKSIZE */

/* Define to 1 if `st_blocks' is a member of `struct stat'. */
/* #undef HAVE_STRUCT_STAT_ST_BLOCKS */

/* Define to 1 if you have the <sys/param.h> header file. */
#define HAVE_SYS_PARAM_H 1

/* Define to 1 if you have the <sys/poll.h> header file. */
/* #undef HAVE_SYS_POLL_H */

/* Define to 1 if you have the <sys/procfs.h> header file. */
/* #undef HAVE_SYS_PROCFS_H */

/* Define to 1 if you have the <sys/ptrace.h> header file. */
/* #undef HAVE_SYS_PTRACE_H */

/* Define to 1 if you have the <sys/resource.h> header file. */
/* #undef HAVE_SYS_RESOURCE_H */

/* Define to 1 if you have the <sys/select.h> header file. */
/* #undef HAVE_SYS_SELECT_H */

/* Define to 1 if you have the <sys/socket.h> header file. */
/* #undef HAVE_SYS_SOCKET_H */

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/un.h> header file. */
/* #undef HAVE_SYS_UN_H */

/* Define to 1 if you have the <sys/wait.h> header file. */
/* #undef HAVE_SYS_WAIT_H */

/* Define to 1 if you have the <termios.h> header file. */
/* #undef HAVE_TERMIOS_H */

/* Define to 1 if you have the <thread_db.h> header file. */
/* #undef HAVE_THREAD_DB_H */

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to 1 if you have the `vfork' function. */
/* #undef HAVE_VFORK */

/* Define to 1 if you have the <vfork.h> header file. */
/* #undef HAVE_VFORK_H */

/* Define to 1 if you have the <wait.h> header file. */
/* #undef HAVE_WAIT_H */

/* Define to 1 if you have the <windows.h> header file. */
#define HAVE_WINDOWS_H 1

/* Define to 1 if `fork' works. */
/* #undef HAVE_WORKING_FORK */

/* Define to 1 if `vfork' works. */
/* #undef HAVE_WORKING_VFORK */

/* Name of package */
#define PACKAGE "gdbsupport"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "gdbsupport"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "gdbsupport 1.0"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "gdbsupport"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "1.0"

/* Define to 1 if the "%ll" format works to print long longs. */
#define PRINTF_HAS_LONG_LONG 1

/* Define to necessary symbol if this constant uses a non-standard name on
   your system. */
/* #undef PTHREAD_CREATE_JOINABLE */

/* Define to the type of arg 1 for ptrace. */
#define PTRACE_TYPE_ARG1 enum __ptrace_request

/* Define to the type of arg 3 for ptrace. */
#define PTRACE_TYPE_ARG3 long

/* Define to the type of arg 4 for ptrace. */
#define PTRACE_TYPE_ARG4 long

/* Define to the type of arg 5 for ptrace. */
/* #undef PTRACE_TYPE_ARG5 */

/* Define as the return type of ptrace. */
#define PTRACE_TYPE_RET int

/* The size of `long long', as computed by sizeof. */
#define SIZEOF_LONG_LONG 8

/* If using the C implementation of alloca, define if you know the
   direction of stack growth for your system; otherwise it will be
   automatically deduced at runtime.
	STACK_DIRECTION > 0 => grows toward higher addresses
	STACK_DIRECTION < 0 => grows toward lower addresses
	STACK_DIRECTION = 0 => direction of growth unknown */
/* #undef STACK_DIRECTION */

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Enable extensions on AIX 3, Interix.  */
#ifndef _ALL_SOURCE
# define _ALL_SOURCE 1
#endif
/* Enable GNU extensions on systems that have them.  */
#ifndef _GNU_SOURCE
# define _GNU_SOURCE 1
#endif
/* Enable threading extensions on Solaris.  */
#ifndef _POSIX_PTHREAD_SEMANTICS
# define _POSIX_PTHREAD_SEMANTICS 1
#endif
/* Enable extensions on HP NonStop.  */
#ifndef _TANDEM_SOURCE
# define _TANDEM_SOURCE 1
#endif
/* Enable general extensions on Solaris.  */
#ifndef __EXTENSIONS__
# define __EXTENSIONS__ 1
#endif


/* Define if we should use the Windows API, instead of the POSIX API. On
   Windows, we use the Windows API when building for MinGW, but the POSIX API
   when building for Cygwin. */
#define USE_WIN32API 1

/* Version number of package */
#define VERSION "1.0"

/* Enable large inode numbers on Mac OS X 10.5.  */
#ifndef _DARWIN_USE_64_BIT_INODE
# define _DARWIN_USE_64_BIT_INODE 1
#endif

/* Number of bits in a file offset, on hosts where this is settable. */
/* #undef _FILE_OFFSET_BITS */

/* Define for large files, on AIX-style hosts. */
/* #undef _LARGE_FILES */

/* Define to 1 if on MINIX. */
/* #undef _MINIX */

/* Define to 2 if the system does not provide POSIX.1 features except with
   this defined. */
/* #undef _POSIX_1_SOURCE */

/* Define to 1 if you need to in order for `stat' and other things to work. */
/* #undef _POSIX_SOURCE */

/* Use structured /proc on Solaris. */
#define _STRUCTURED_PROC 1

/* Define to `int' if <sys/types.h> does not define. */
/* #undef pid_t */

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */

/* Define as `fork' if `vfork' does not work. */
#define vfork fork
