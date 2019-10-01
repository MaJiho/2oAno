ex13: multiplication_table.o multiplication_table_n.o line.o main.o
	gcc multiplication_table.o multiplication_table_n.o line.o main.o -o ex13

multiplication_table.o: multiplication_table.c
	gcc -g -Wall -c multiplication_table.c -o multiplication_table.o

multiplication_table_n.o: multiplication_table_n.c
	gcc -g -Wall -c multiplication_table_n.c -o multiplication_table_n.o

line.o: line.c
	gcc -g -Wall -c line.c -o line.o

main.o: main.c
	gcc -g -Wall -c main.c -o main.o

clean:
	rm -f *.o ex13

run: ex13
	./ex13
