##
## @info   genclibpro ver.1.0
## @author Vladimir Roncevic <elektron.ronca@gmail.com>
## @brief  Process this file with automake to produce Makefile.in
##

AM_CPPFLAGS = \
	-DPACKAGE_LOCALE_DIR=\""$(localedir)"\" \
	-DPACKAGE_SRC_DIR=\""$(srcdir)"\" \
	-DPACKAGE_DATA_DIR=\""$(pkgdatadir)"\"

AM_CFLAGS = \
	-Wall \
	-g

lib_LTLIBRARIES = libembeddedobj.la

libembeddedobj_la_SOURCES = \
	lib.c

libembeddedobj_la_LDFLAGS = 

libembeddedobj_la_LIBADD = 

include_HEADERS = \
	embeddedobj.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = embeddedobj-0.1.pc

EXTRA_DIST = \
	embeddedobj-0.1.pc.in


