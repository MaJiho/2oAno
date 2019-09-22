ex06:  string_to_int.o main.o
	gcc string_to_int.o main.o -o ex06

string_to_int.o: string_to_int.c
	gcc -g -Wall -c string_to_int.c -o string_to_int.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o ex06

run: ex06
	./ex06
