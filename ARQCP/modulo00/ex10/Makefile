ex10: average.o main.o
	gcc average.o main.o -o ex10

average.o: average.c
	gcc -g -Wall -c average.c -o average.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o ex10

run: ex10
	./ex10
