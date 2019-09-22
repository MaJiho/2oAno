ex08:  x_int.o x_dec.o main.o
	gcc x_int.o x_dec.o main.o -o ex08

x_dec.o: x_dec.c
	gcc -g -Wall -c x_dec.c -o x_dec.o

x_int.o: x_int.c
	gcc -g -Wall -c x_int.c -o x_int.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o ex08

run: ex08
	./ex08
