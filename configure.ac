## Copyright (C) 2012 Kolibre
#
# This file is part of kolibre-daisyonline.
#
# Kolibre-daisyonline is free software: you can redistribute it and/or modify
# it under the terms of the GNU Lesser General Public License as published by
# the Free Software Foundation, either version 2.1 of the License, or
# (at your option) any later version.
#
# Kolibre-daisyonline is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU Lesser General Public License for more details.
#
# You should have received a copy of the GNU Lesser General Public License
# along with kolibre-daisyonline. If not, see <http://www.gnu.org/licenses/>.


# Process this file with autoconf to produce a configure script.

dnl -----------------------------------------------
dnl  Release instructions
dnl -----------------------------------------------
dnl
dnl  When you are about to release the software
dnl  either as a stable release or an unstable release
dnl  you should update the *_VERSION variables below
dnl  according to the following rules:
dnl
dnl  1. If any interfaces has been removed or changed,
dnl     increment MAJOR_VERSION and set others to 0
dnl  2. If any interface has been added,
dnl     increment MINOR_VERSION and set PATCH_VERSION to 0
dnl  3. If only the source code has changed,
dnl     increment PATCH_VERSION
dnl
dnl  If you are releasing a stable version,
dnl  set package version number in AC_INIT to
dnl  [$MAJOR_VERSION.$MINOR_VERSION.$PATCH_VERSION]
dnl
dnl  If you are releasing an unstable version,
dnl  add a string (i.e -alpha or -beta or -rc1) to the
dnl  package version in AC_INIT after $PATCH_VERSION
dnl  e.g. [$MAJOR_VERSION.$MINOR_VERSION.$PATCH_VERSION-rc1]

# Setup version here:
m4_define([MAJOR_VERSION], [0])
m4_define([MINOR_VERSION], [0])
m4_define([PATCH_VERSION], [1])
m4_define([EXTRA_VERSION], [])

AC_PREREQ([2.67])
AC_INIT([kolibre-daisyonline],[MAJOR_VERSION.MINOR_VERSION.PATCH_VERSION[]EXTRA_VERSION],[BUG-REPORT-ADDRESS])
AC_CONFIG_SRCDIR([src])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE(tar-pax color-tests parallel-tests)

VERSION_INFO=m4_eval(MAJOR_VERSION + MINOR_VERSION):PATCH_VERSION:MINOR_VERSION
AC_SUBST(VERSION_INFO)

# Checks for programs.
LT_INIT
AC_LANG([C++])
AC_PROG_CXX
AC_PROG_AWK
AC_PROG_CC
AC_PROG_MAKE_SET
ACX_PTHREAD

dnl -----------------------------------------------
dnl Doxygen settings
dnl -----------------------------------------------

DX_DOXYGEN_FEATURE(ON)
DX_HTML_FEATURE(ON)
DX_PDF_FEATURE(ON)
DX_INIT_DOXYGEN([kolibre-daisyonline], doxygen.cfg, [doxygen-doc])


# Checks for libraries.

dnl -----------------------------------------------
dnl check for log4cxx
dnl -----------------------------------------------

PKG_CHECK_MODULES(LOG4CXX, liblog4cxx >= 0.10.0, HAVE_LOG4CXX=yes, HAVE_LOG4CXX=no)

if (test "x$HAVE_LOG4CXX" = "xno") then
    AC_MSG_ERROR([**liblog4cxx >= 0.10.0 is needed to build libkolibre-daisyonline **])
fi

AC_SUBST(LOG4CXX_CFLAGS)
AC_SUBST(LOG4CXX_LIBS)

dnl -----------------------------------------------
dnl check for axis2c
dnl -----------------------------------------------

PKG_CHECK_MODULES(AXIS2C, axis2c >= 1.6.0, HAVE_AXIS2C=yes, HAVE_AXIS2C=no)

if (test "x$HAVE_AXIS2C" = "xno") then
    AC_MSG_ERROR([**libaxis2c >= 1.6.0 is needed to build kolibre-daisyonline **])
fi

AC_SUBST(AXIS2C_CFLAGS)
AC_SUBST(AXIS2C_LIBS)

AXIS2C_PREFIX=$(pkg-config --variable=prefix axis2c)
AC_SUBST(AXIS2C_PREFIX)

# FIXME: Replace `main' with a function in `-laxis2_axiom':
#AC_CHECK_LIB([axis2_axiom], [main])
# FIXME: Replace `main' with a function in `-laxis2_engine':
#AC_CHECK_LIB([axis2_engine], [main])
# FIXME: Replace `main' with a function in `-laxis2_http_receiver':
#AC_CHECK_LIB([axis2_http_receiver], [main])
# FIXME: Replace `main' with a function in `-laxis2_http_sender':
#AC_CHECK_LIB([axis2_http_sender], [main])
# FIXME: Replace `main' with a function in `-laxis2_parser':
#AC_CHECK_LIB([axis2_parser], [main])
# FIXME: Replace `main' with a function in `-laxutil':
#AC_CHECK_LIB([axutil], [main])

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.
AC_HEADER_STDBOOL
AC_TYPE_INT64_T

# Checks for library functions.
AC_CHECK_FUNCS([memset strchr strdup strstr])

AC_CONFIG_FILES([libkolibre-daisyonline.pc
                 Makefile
                 doxygen.cfg
                 src/Makefile
                 src/stubs/Makefile
                 tests/Makefile
                 tests/daisyonline-service-10/Makefile
                 src/axis2c_client_home.h])
AC_OUTPUT
