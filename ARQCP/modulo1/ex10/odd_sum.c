#include <stdio.h>

int odd_sum(int *p)
{
	int i, n=*p+1, sum=0; p++;
	for(i=1;i<n;i++){
		if(*p % 2 != 0){ sum+=*p; }
		p++;
	}
	return sum;
}
