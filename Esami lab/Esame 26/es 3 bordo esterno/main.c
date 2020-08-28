#include "matrix.h"
#include<stdint.h>
#include <stdlib.h>

int main(void)
{
	double v[] = { 1,2,3,4,5,6,7,8,9 };
	struct matrix m= { 3,3,v };
	size_t n = 0;
	double *new =bordo_esterno(&m,&n);


}