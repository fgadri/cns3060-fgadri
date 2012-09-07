ll: project-1-debug

run: release
	./project-1 "CNS 3060" is going to be FUN

debug: project-1-debug
	gdb project-1

release: clean project-1

project-1-debug: project-1.cpp
	g++ project-1.cpp -g -o project-1

project-1: project-1.cpp
	g++ project-1.cpp -o project-1

clean:
	rm -f project-1
