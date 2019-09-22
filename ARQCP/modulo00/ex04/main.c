#include <stdio.h>
#include "count.h"

int main()
{
	int i, n, value;
	printf("Size of array:");
	scanf("%d", &n);
	int vec[n];
	for(i=0;i<n;i++)
	{
		printf("Number:");
		scanf("%d",&vec[i]);
	}
	printf("Value:");
	scanf("%d", &value);
	int x=count(vec,n,value);
	printf("Your value shows up %d times\n", x);
	return 0;
}

