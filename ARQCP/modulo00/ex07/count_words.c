#include <stdio.h>

int count_words(char *str)
{
	int count=1,i=0;
	while(str[i]!='\0')
	{
		char a=str[i], b=str[i+1];
		if(a == ' ' && ( (b>'A' && b<'Z') || (b>'a' && b<'z') )){ 
			count++; 
		} i++;
	}
	return count;
}

