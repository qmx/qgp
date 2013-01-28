#! /bin/sh

if [ -x "`which autoreconf 2>/dev/null`" ] ; then
  exec autoreconf -ivf
fi

aclocal && \
automake --add-missing --force-missing --include-deps && \
autoconf
