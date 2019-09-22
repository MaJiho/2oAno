#include <stdio.h>
#include "string_to_int.h"

int main()
{
	int n, value1, value2;
	printf("Size of array:"); scanf("%d",&n);
	char str[n];
	printf("String:"); scanf("%s", str);
	value1=string_to_int(str);
	
	printf("Size of array:"); scanf("%d",&n);
	printf("String:"); scanf("%s", str);
	value2=string_to_int(str);
	
	float avg=value1+value2/2.0;
	printf("%f", avg);
	
	return 0;
}
