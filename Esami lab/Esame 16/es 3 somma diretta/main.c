#include "matrix.h"
#include <stdint.h>
#include <stdlib.h>
int main(void)
{
	double v[] = { 1,3,2,2,3,1 };
	struct matrix a = { 2,3,v };
	double v1[] = { 1,6,0,1 };
	struct matrix b = { 2,2,v1 };
	struct matrix *c = mat_sommadiretta(&a, &b);

}