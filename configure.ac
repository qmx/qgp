AC_INIT([qgp],[0.1],[qmx@qmx.me])
AM_INIT_AUTOMAKE([1.11 foreign -Wall -Werror dist-bzip2 tar-ustar])
m4_ifdef([AM_SILENT_RULES], [AM_SILENT_RULES([yes])])
AC_PROG_CC_C99
AM_PROG_AR
AC_PROG_RANLIB
AC_PREREQ([2.69])
AC_CHECK_LIB([sodium], [crypto_box_curve25519xsalsa20poly1305_ref], [SODIUMLIB=-lsodium])
AC_SUBST([SODIUMLIB])
AC_CHECK_HEADERS([unistd.h])
AC_CHECK_HEADERS([stdlib.h])


AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT
