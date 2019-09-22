#include <stdio.h>
#include "average.h"

int g_n=5, g_v[100]={[0]=1, [1]=2, [2]=3, [3]=4, [4]=5};

int main()
{	
	int v[] = { 1, 2 };
	int r=0, r2, r3;
	/*g_n=5; 
	g_v[0]=1; g_v[1]=2; g_v[2]=3; g_v[3]=4; g_v[4]=5;*/
	r = average(v[0], v[1]);
	r2 = average_array(v, 2);
	r3 = average_global_array();
	printf("average = %d\naverage of array = %d\n", r, r2);
	printf("global average of array = %d\n", r3);
	return 0;
}

