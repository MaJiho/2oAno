#include <stdio.h>
#include "string_to_int.h"

int main()
{
	int n;
	printf("Size of array:"); scanf("%d",&n);
	char str[n];
	printf("String:"); scanf("%s", str);
	printf("%d", string_to_int(str));
	
	return 0;
}
