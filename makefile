#
# shx-0.2 makefile script
# December 17, 2002
# Devin Teske <devinteske@hotmail.com>
#

srcdir   = .

CC       = gcc
INSTALL  = /usr/bin/install -c
INSTALL_PROGRAM    = ${INSTALL}
INSTALL_DATA       = ${INSTALL} -m 644

MV       = /bin/mv
RM       = /bin/rm
SHELL    = /bin/sh

# Where to install
prefix   = /usr/local/bin
exec_prefix   = ${prefix}
exec_suffix   = 

SUBDIRS  = src

mkfldep  = configure config.status makefile.in \
           include/config.h.in src/Makefile.in

noargs: all

all hx ghx: makefile
	@for dir in $(SUBDIRS); do \
	   echo "Making $@ in $$dir..."; \
	   (cd $$dir ; $(MAKE) $(MFLAGS) prefix="$(prefix)" $@) || exit 1; \
	done

install: makefile
	@for dir in $(SUBDIRS); do \
	   echo "Making $@ in $$dir..."; \
	   (cd $$dir ; $(MAKE) $(MFLAGS) prefix="$(prefix)" $@); \
	done

clean:
	@for dir in $(SUBDIRS); do \
	   echo "Making $@ in $$dir..."; \
	   (cd $$dir ; $(MAKE) $(MFLAGS) prefix="$(prefix)" $@); \
	done

almostclean: clean
	$(RM) -f config.log makefile include/config.h
	@for dir in $(SUBDIRS); do \
	   echo Making distclean in $$dir; \
	   (cd $$dir; $(MAKE) $(MFLAGS) prefix="$(prefix)" distclean); \
	done

distclean:
	$(RM) -f config.log makefile include/config.h config.status \
	         config.cache run/hx$(exec_suffix) run/ghx$(exec_suffix) \
	         run/core
	@for dir in $(SUBDIRS); do \
	   echo Making distclean in $$dir; \
	   (cd $$dir; $(MAKE) $(MFLAGS) prefix="$(prefix)" distclean); \
	done

targz: distclean
	tar cvf current.tar . ; gzip current.tar

tgz: distclean
	tar czfv current.tgz .

makefile: $(mkfldep)
	@echo "Package configuration updated. Cleaning and reconfiguring" ;\
	./config.status --recheck;\
	./config.status ;\
	$(MAKE) $(MFLAGS) clean

depend:
