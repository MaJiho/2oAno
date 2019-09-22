#include <stdio.h>

int main()
{
	int i=0; char str[100], max=0;
	printf("Number:"); scanf("%s", str);
	
	while(str[i]!='\0'){
		if(str[i]>max){ max=str[i]; }
		i++;
	}
	switch(max){
		case '0':
		case '1': printf("BIN\n"); break;
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7': printf("OCT\n"); break;
		case '8':
		case '9': printf("DEC\n"); break;
		default: printf("HEX\n");
	}
		
	return 0;
}

