AC_INIT([opxg], [1.0], [opxg@thenullest.org], [foreign])
AM_INIT_AUTOMAKE([-Wall -Werror foreign])
AC_PROG_CC
AM_CONFIG_HEADER(config.h)
AC_CONFIG_FILES([
                 Makefile
                 src/Makefile
                 ])
PKG_CHECK_MODULES(DEPS, gtk+-2.0)
AC_SUBST(DEPS_CFLAGS)
AC_SUBST(DEPS_LIBS)

AC_OUTPUT
