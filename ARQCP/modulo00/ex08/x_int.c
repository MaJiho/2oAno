#include <stdio.h>

int x_int(char *str){
	int i=0, num=0;
	while(str[i]!='.'){
		num=num*10+(str[i]-'0'); i++;
	}
	return num;
}
