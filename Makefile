lib: lib.c
	gcc -fPIC -g -c -Wall lib.c
	gcc lib.o -shared -dynamiclib -o lib.so -lc

main: main.c
	gcc main.c -ldl -o main

clean:
	rm lib.so main
