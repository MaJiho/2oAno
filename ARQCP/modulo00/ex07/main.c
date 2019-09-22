#include <stdio.h>
#include "count_words.h"

int main()
{
	char str[100];
	printf("String:"); scanf("%[^\n]%*c", str);
	printf("%d\n",count_words(str));
	return 0;
}

