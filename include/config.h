/* include/config.h.  Generated automatically by configure.  */
/* include/config.h.in.  Generated automatically from configure.in by autoheader.  */


/* Define as the return type of signal handlers (int or void).  */
#define RETSIGTYPE void


#define HAVE_STDARG_H 1
/* host guessing */
#define CONFIG_HOST_TYPE ""

/* Define if snprintf is broken */
#define BROKEN_SNPRINTF 1

/* Define to to use pthreads instead of fork or clone for htxf */
/* #undef CONFIG_HTXF_PTHREAD */

/* Define to to use clone instead of fork for htxf */
/* #undef CONFIG_HTXF_CLONE */

/* Define to use fork instead of clone for htxf */
#define CONFIG_HTXF_FORK 1

/* Define to compile image preview code */
/* #undef CONFIG_HTXF_PREVIEW */

/* Define to enable HFS */
#define CONFIG_HFS 1

/* Define to compile megahal */
/* #undef CONFIG_HAL */

/* Define to compile HOPE */
/* #undef CONFIG_HOPE */

/* Define to compile cipher */
/* #undef CONFIG_CIPHER */

/* Define to compile compress */
/* #undef CONFIG_COMPRESS */

/* Define if you have the strcasestr function */
#define HAVE_STRCASESTR 1

/* Define if you have the basename function */
#define HAVE_BASENAME 1

/* Define if you have the realpath function */
/* #undef HAVE_REALPATH */

/* Define if you have the strptime function */
/* #undef HAVE_STRPTIME */

/* Path to tr */
#define PATH_TR "/usr/bin/tr"

/* Default sound player */
#define DEFAULT_SND_PLAYER "play"

/* Define to compile trackname command */
/* #undef CONFIG_XMMS */

/* Define to dull the icon of a user when the user is away */
/* #undef CONFIG_DULLED */

/* Enable IPv6 Support */
/* #undef CONFIG_IPV6 */

/* apple constants */
/* #undef HOST_DARWIN */
/* #undef CORESERVICES */

/* The number of bytes in a int.  */
#define SIZEOF_INT 4

/* The number of bytes in a long.  */
#define SIZEOF_LONG 8

/* The number of bytes in a void *.  */
#define SIZEOF_VOID_P 8

/* Define if you have the getdtablesize function.  */
#define HAVE_GETDTABLESIZE 1

/* Define if you have the gethostname function.  */
#define HAVE_GETHOSTNAME 1

/* Define if you have the getrlimit function.  */
#define HAVE_GETRLIMIT 1

/* Define if you have the hstrerror function.  */
#define HAVE_HSTRERROR 1

/* Define if you have the inet_aton function.  */
#define HAVE_INET_ATON 1

/* Define if you have the inet_ntoa_r function.  */
/* #undef HAVE_INET_NTOA_R */

/* Define if you have the localtime_r function.  */
#define HAVE_LOCALTIME_R 1

/* Define if you have the putenv function.  */
#define HAVE_PUTENV 1

/* Define if you have the snprintf function.  */
#define HAVE_SNPRINTF 1

/* Define if you have the tcgetattr function.  */
#define HAVE_TCGETATTR 1

/* Define if you have the tcsetattr function.  */
#define HAVE_TCSETATTR 1

/* Define if you have the vsnprintf function.  */
#define HAVE_VSNPRINTF 1

/* Define if you have the <openssl/rand.h> header file.  */
/* #undef HAVE_OPENSSL_RAND_H */

/* Define if you have the <pthread.h> header file.  */
/* #undef HAVE_PTHREAD_H */

/* Define if you have the <stdarg.h> header file.  */
/* #undef HAVE_STDARG_H */

/* Define if you have the <sys/select.h> header file.  */
/* #undef HAVE_SYS_SELECT_H */

/* Define if you have the <termcap.h> header file.  */
/* #undef HAVE_TERMCAP_H */

/* Define if you have the 44bsd library (-l44bsd).  */
/* #undef HAVE_LIB44BSD */

/* Define if you have the m library (-lm).  */
/* #undef HAVE_LIBM */

/* Define if you have the nsl library (-lnsl).  */
/* #undef HAVE_LIBNSL */

/* Define if you have the pthread library (-lpthread).  */
/* #undef HAVE_LIBPTHREAD */

/* Define if you have the resolv library (-lresolv).  */
/* #undef HAVE_LIBRESOLV */

/* Define if you have the socket library (-lsocket).  */
/* #undef HAVE_LIBSOCKET */
