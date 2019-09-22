#include <stdio.h>
#include "sum.h"

int main()
{
	int a, b, x;
	do
	{
		scanf("%d%d", &a, &b);
		x=sum(a, b);
	}
	while(x>=10);
	
	return 0;
}

