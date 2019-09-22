#include <stdio.h>

int count(int *vec, int n, int value)
{
	int i, count=0;
	for(i=0;i<n;i++)
	{
		if(vec[i]==value)
		{
			count++;
		}
	}
	return count;
}
