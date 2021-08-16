VERSION = 1.0-0.1


build:
	gcc main.c help.h colors.h add.h ver.h sync.h upgrade.h -o fpkg

install:
	cp fpkg /usr/bin/
	chmod +x /usr/bin/fpkg
	mkdir -p /etc/fpkg

remove:
	rm /usr/bin/fpkg
	rm -r /etc/fpkg

clean:
	rm fpkg 

pkg: build
	mkdir build
	cp LICENSE Makefile make.sh README.md *.c *.h fpkg build/
	tar cfzv fpkg-$(VERSION).tar.gz build/


