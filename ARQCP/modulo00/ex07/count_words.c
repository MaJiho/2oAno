#include <stdio.h>

int count_words(char *str)
{
	int count=1,i=0;
	while(str[i]!='\0')
	{
		if(str[i]==' '){ count++; } i++;
	}
	return count;
}

