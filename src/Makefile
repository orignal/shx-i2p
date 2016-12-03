# Generated automatically from Makefile.in by configure.
#
# shx-0.2 makefile script
# December 17, 2002
# Devin Teske <devinteske@hotmail.com>
#

srcdir          = .

INSTALL_PROGRAM = ${INSTALL}
INSTALL_DATA    = ${INSTALL} -m 644

# Where to install
prefix          = /usr/local/bin
exec_prefix     = $(prefix)

# settings from configure
exec_suffix     = 
top_srcdir      = ..
top_include     = $(top_srcdir)/include

# Gotta love the DOS legacy
#
HX_EXE          = $(top_srcdir)/run/hx$(exec_suffix)
GHX_EXE         = $(top_srcdir)/run/ghx$(exec_suffix)

DEFAULT_PREFIX  = $(prefix)

CC              = gcc
MAKEDEPEND      = /bin/true
INSTALL         = /usr/bin/install -c

DEFS            = -DHAVE_CONFIG_H 
LDFLAGS         = -g
SYS_INCLUDES    = 
INCLUDE         = -I. -I./include -I$(top_include)
CFLAGS          = -w -g -O2 $(INCLUDE) $(SYS_INCLUDES) $(DEFS)

# Libraries

# LIBOBJS holds missing objects (determined from AC_REPLACE_FUNC)
LIBOBJS         =  inet_ntoa_r.o
HXLIBS          =  hfs/hfs.o -ltermcap -lreadline -lhistory -lncurses
SHAREDLIBS      = 

# Objects
SHARED_OBJS     = fd.o version.o xmalloc.o decode.o \
                   snprintf.o $(LIBOBJS)
HXOBJS          =  hx_main.o hx_tty.o hlclient.o getopt_r.o getopt1_r.o hx_hlwrite.o hx_chat.o hx_users.o hx_commands.o \
                  macres.o

# Build Targets
TARGETS         =  $(HX_EXE)
hxdirs          =  hfs

MV              = /bin/mv
RM              = /bin/rm
SHELL           = /bin/sh

############################################### Rules

noargs: all

all: $(TARGETS)

install:

hxdirs:
	@for dir in $(hxdirs); do \
	   echo "Making all in $$dir..."; \
	   (cd $$dir;$(MAKE) $(MFLAGS) prefix="$(prefix)" all)||exit 1;\
	done

$(HX_EXE): hxdirs $(SHARED_OBJS) $(HXOBJS)
	$(CC) $(LDFLAGS) $(DEFS) $(HXOBJS) $(SHARED_OBJS) $(HXLIBS) $(SHAREDLIBS) -o $@
	@echo "make: success -> binary should be in \`run'"

$(GHX_EXE): hxdirs $(SHARED_OBJS) $(HXOBJS)
	$(CC) $(LDFLAGS) $(DEFS) $(HXOBJS) $(SHARED_OBJS) $(HXLIBS) $(SHARED_LIBS) -o $@
	@echo "make: success -> binary should be in \`run'"

hx_main.o: main.c $(top_include)/main.h
	$(CC) $(CFLAGS) -DONLY_CLIENT -c main.c -o $@

ghx_main.o: main.c $(top_include)/main.h
	$(CC) $(CFLAGS) -DONLY_CLIENT -DONLY_GTK -c main.c -o $(@)

ghx_tty.o: hx_tty.c $(top_include)/hx.h $(top_include)/main.h
	$(CC) $(CFLAGS) -DONLY_GTK -c hx_tty.c -o $@

ghx_hlclient.o: hlclient.c $(top_include)/hx.h $(top_include)/main.h
	$(CC) $(CFLAGS) -DONLY_GTK -c hlclient.c -o $@

hx_hlwrite.o: hlwrite.c $(top_include)/main.h
	$(CC) $(CFLAGS) -DONLY_CLIENT -c hlwrite.c -o $(@)

clean:
	$(RM) -f *.o
	@for dir in $(hxdirs); do \
	   echo "Making $@ in $$dir..."; \
	   (cd $$dir;$(MAKE) $(MFLAGS) prefix="$(prefix)" $@);\
	done

distclean:
	$(RM) -f *.o Makefile
	@for dir in $(hxdirs); do \
	   echo Making distclean in $$dir; \
	   (cd $$dir;$(MAKE) $(MFLAGS) prefix="$(prefix)" distclean);\
	done
	rm -f config.cache config.log config.status Makefile config.h
