#include <stdio.h>
#include "count_words.h"

int main()
{
	int n;
	printf("Size of array:"); scanf("%d",&n);
	char str[n];
	printf("String:"); scanf("%s", str);
	printf("%d",count_words(str));
	return 0;
}

