ex11: average.o main.o
	gcc average.o main.o -o ex11

average.o: average.c
	gcc -g -Wall -c average.c -o average.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o ex11

run: ex11
	./ex11
