all: connections

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g -c my_mat.c
main.o: main.c my_mat.h
	gcc -Wall -g -c main.c 

connection.so: my_mat.o 
	gcc -shared -o my_mat.o

connections: main.o connections.so
	-gcc -Wall -g -o connections main.o connection.so -lm

.PHONY: clean

clean: rm -f *.o *.so connections connection