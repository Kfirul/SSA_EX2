.PHONY: clean all

GCC = gcc
AR = ar -rcs
FLAGS = -Wall -g

##Making o files

main.o: main.c
	$(GCC) $(FLAGS) -c main.c

my_mat.o: my_mat.c 
	$(GCC) $(FLAGS) -c my_mat.c 

## Making my_mat library
my_mat.a: my_mat.o
	$(AR) my_mat.a my_mat.o
	ranlib my_mat.a 

## Making main file
connection: my_mat.a main.o
	$(GCC) $(FLAGS) main.o my_mat.a -o connection -lm

all: connection

clean: 
	rm -f *.o *.a connection