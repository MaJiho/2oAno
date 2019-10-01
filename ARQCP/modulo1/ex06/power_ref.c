#include <stdio.h>

void power_ref(int *x, int y)
{
	int i, n;
	
	if(y<0){ *x=0; }
	else{ n= *x; *x=1; } 
	
	for(i=0;i<y;i++){ *x=*x * n; }
}

