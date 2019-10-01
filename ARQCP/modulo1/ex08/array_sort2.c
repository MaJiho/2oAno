#include <stdio.h>

void array_sort2(int *vec, int n)
{
	int x, i, j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if( *(vec+i) > *(vec+j) ){
				x = *(vec+i);
				*(vec+i) = *(vec+j);
				*(vec+j) = x;
			}
		}
	}
}

