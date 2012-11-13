all: DiskSched-debug

run: release
	./DiskSched "CNS 3060"

debug: DiskSched-debug
	gdb DiskSched

release: clean DiskSched

DiskSched-debug: DiskSched.cpp
	g++ DiskSched.cpp -g -o DiskSched

DiskSched: DiskSched.cpp
	g++ DiskSched.cpp -o DiskSched

clean:
	rm -f DiskSched
