all: signal-debug

run: release
	./signal.c

debug: signal-debug
	gdb signal

release: clean signal

signal-debug: signal.c
	gcc signal.c -g -o signal

signal: signal.c
	gcc signal.c -o signal

clean:
	rm -f signal
