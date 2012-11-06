all: more1-debug

run: release
	./more1 "CNS 3060"

debug: more1-debug
	gdb more1

release: clean more1

DiskSched-debug: more1.c
	gcc  more1.c -g -o more1

DiskSched: more.c
	gcc  more1.c -o more1

clean:
	rm -f more1
