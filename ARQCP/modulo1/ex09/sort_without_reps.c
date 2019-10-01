#include <stdio.h>

int sort_without_reps(int *src, int n, int *dest)
{
	int x, i, j, pos=0;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if( *(src+i) > *(src+j) ){
				x = *(src+i);
				*(src+i) = *(src+j);
				*(src+j) = x;
			}
		}
	}
	for(i=0;i<n;i++){
		j=0;
		while(j<pos && *(src+i)!=*(dest+j)){ j++; }
		if(j==pos){ *(dest+j)=*(src+i); pos++; }
	}
	return pos;
}

