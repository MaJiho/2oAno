#include <stdio.h>

int main()
{
	int x = 5;
	int* xPtr = &x;
	float y = *xPtr + 3;
	int vec[] = {10, 11, 12, 13};
	
	printf("x=%d; y=%f\n", x, y);
	printf("Adress of x=%p; Adress of xPtr=%p\n", &x, xPtr);
	printf("Value pointed by xPtr=%d\n", *xPtr);
	printf("Adress of vec=%p\n", vec);
	printf("Values:\nvec[0}=%d\nvec[1]=%d\nvec[2]=%d\nvec[3]=%d\n",
	vec[0], vec[1], vec[2], vec[3]);
	printf("Adresses:\nvec[0}=%p\nvec[1]=%p\nvec[2]=%p\nvec[3]=%p\n",
	&vec[0], &vec[1], &vec[2], &vec[3]);
	return 0;
}
// b) Os endereços de vec têm uma diferença de 4 bits

// c) Em computadores diferentes, os endereços de memória seriam
//    provavelmente diferentes, já que não são espaços físicos e
//    permanentes.
