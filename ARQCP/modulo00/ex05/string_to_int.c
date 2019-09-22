#include <stdio.h>

int string_to_int(char *str)
{
	int value=0, i=0;
	while(str[i]!='\0')
	{
		value=value*10+(str[i]-'0');
	}
	return value;
}
