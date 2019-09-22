#include <stdio.h>

int x_dec(char *str){
	int i=0, num=0;
	while(str[i]!='.'){
		i++;
	}
	i++;
	while(str[i]!='\0'){
		num=num*10+(str[i]-'0'); i++;
	}
	return num;
}
