#include <stdio.h>

extern int g_n, g_v[100];

int average(int n1, int n2){
	return (n1+n2)/2;
}

int average_array(int v [], int n){
	int i, sum=0;
	for(i=0;i<n;i++){ sum+=v[i]; }
	return sum/n;
}

int average_global_array(){
	int i, sum=0;
	for(i=0;i<g_n;i++){ sum+=g_v[i]; }
	return sum/g_n;
}

