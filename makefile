all: struct.o
	gcc -o Struct struct.o
struct.o: struct.c struct.h
	gcc -c struct.c
run:
	./Struct
