all: DiSchd-debug

run: release
	./DiSchd "CNS 3060"

debug: DiSchd-debug
	gdb DiSchd

release: clean DiSchd

DiSchd-debug: DiSchd.cpp
	g++ DiSchd.cpp -g -o DiSchd

DiSchd: DiSchd.cpp
	g++ DiSchd.cpp -o DiSchd

clean:
	rm -f DiSchd
