#include "matrix.h"
int main(void)
{
	double v[] = { 1,2,3,1,2,4 };
	struct matrix a = { 3,2,v };
	double v2[] = { 0,3,2,1 };
	struct matrix b = { 2,2,v2 };
	struct matrix *c = prod_kronecker(&a, &b);


}