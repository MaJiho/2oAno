#include <stdio.h>

int sum_even(int *p, int num)
{
	int i, sum=0, x;
	for(i=0;i<num;i++){
		x=(int) *p;
		if(x%2==0){ sum+=x; }
		p++;
	}
	return sum;	
}
