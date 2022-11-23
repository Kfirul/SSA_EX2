.PHONY: clean all

GCC = gcc
AR = ar -rcs
FLAGS = -Wall -g 

##Making o files

main.o: main.c
	$(GCC) $(FLAGS) -fPIC-c main.c

my_mat.o: my_mat.c 
	$(GCC) $(FLAGS) -fPIC -c my_mat.c 

## Making my_mat library
my_mat.a: my_mat.o
	$(AR) my_mat.a my_mat.o
	ranlib my_mat.a 

## Making main file
connections: my_mat.a main.o
	$(GCC) $(FLAGS) main.o my_mat.a -o connections -lm

all: connections

clean: 
	rm -f *.o *.a connections
