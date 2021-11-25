all: connections lib.a

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g -c my_mat.c -lm

main.o: main.c my_mat.h
	gcc -Wall -g -c main.c 

lib.a: my_mat.o 
	ar -rcs lib.a my_mat.o

connections: main.o lib.a
	gcc -Wall -g -o connections main.o lib.a -lm

.PHONY: clean

clean: 
	rm -f *.o *.a connections 