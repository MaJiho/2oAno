#include <stdio.h>

void upper2(char *str)
{
	while(*str!='\0'){
		if(*str>='a' && *str<='z'){ *str=*str - ' '; }
		str++;
	}
}
