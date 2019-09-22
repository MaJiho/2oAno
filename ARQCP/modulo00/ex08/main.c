#include <stdio.h>
#include "x_int.h"
#include "x_dec.h"

int main()
{
	char str[100];
	printf("Number:"); scanf("%s", str);
	
	printf("Int:%d\nDec:%d\n",x_int(str), x_dec(str));
	return 0;
}

