ll: cat1-debug

run: release
	./cat1.c

debug: cat1-debug
	gdb cat1

release: clean cat1

cat1-debug: cat1.c
	gcc cat1.c -g -o cat1

cat1: cat1.c
	gcc cat1.c -o cat1

clean:
	rm -f cat1
