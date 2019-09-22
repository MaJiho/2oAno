ex07:  count_words.o main.o
	gcc count_words.o main.o -o ex07

count_words.o: count_words.c
	gcc -g -Wall -c count_words.c -o count_words.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o ex07

run: ex07
	./ex07
