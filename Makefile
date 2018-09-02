lib: lib.c
	gcc -fPIC -g -c -Wall lib.c
	gcc  lib.o -shared -Wl,-soname,lib.so -o lib.so -lc

main: main.c
	gcc main.c -ldl -o main
