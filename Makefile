all: connection.so connections

my_mat.o: may_mat.c my_mat.h
	gcc -Wall -g -c my_mat.c
main.o: main.c my_mat.h
	gcc -Wall -g -c main.c

connection.so: my_mat.o 
	gcc -shared -o connection.o

connections: main.o connections.so
	-gcc -Wall -g -o connections main.o connection.so -lm

.PHONY: clean

clean: rm -f *.o *.so connections connection