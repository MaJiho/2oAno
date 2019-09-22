ex04:  count.o main.o
	gcc count.o main.o -o ex04

count.o: count.c
	gcc -g -Wall -c count.c -o count.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o ex04

run: ex04
	./ex04
