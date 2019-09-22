#include <stdio.h>
#include "size_string.h"

int main() {
	char x[] = "I will master ARQCP";
	printf("Size =%u\n", sizeof(x)); //Tamanho da string com o \0 no fim
	printf("Size =%u\n", size_string_wrong (x)); //Tamanho do endereço
	printf("Size =%u\n", size_string_correct(x)); //Tamanho da string sem o \0
	
	char y[25] = "I will master ARQCP";
	printf("\n Size =%u\n", sizeof(y));//Tamanho da string ditado (25)
	printf("Size =%u\n", size_string_wrong (y));//Tamanho do endereço
	printf("Size =%u\n", size_string_correct(y));//Tamanho da string
	return 0;
}
