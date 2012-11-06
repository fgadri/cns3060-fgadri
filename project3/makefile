all: du1-debug

run: release
	./du1 "CNS 3060" 

debug: du1-debug
	gdb du1

release: clean du1

du1-debug: du1.c
	gcc du1.c -g -o du1

du1: du1.c
	gcc du1.c -o du1

clean:
	rm -f du1
