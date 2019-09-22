#include <stdio.h>

void fill_array(int *vec);

int n=30;

int main()
{
	int sum=0, i=0; int vec[n];
	fill_array(vec);
	for(i=0;i<n;i++)
	{ 
		sum+=vec[i];
	}
	printf("%f", sum*1.0/n);
	return 0;
}

void fill_array(int *vec)
{
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d", &vec[i]);
	}
}

