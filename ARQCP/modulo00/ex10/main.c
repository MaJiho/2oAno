#include <stdio.h>
#include "average.h"

int main()
{	
	int v[] = { 1, 2 };
	int r=0, r2;
	r = average(v[0], v[1]);
	r2 = average_array(v, 2);
	printf("average = %d\naverage of array = %d\n", r, r2);
	return 0;
}

