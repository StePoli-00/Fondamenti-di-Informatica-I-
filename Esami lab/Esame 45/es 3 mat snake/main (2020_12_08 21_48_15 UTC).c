#include "matrix.h"
int main(void)
{
	double v[] = { 1,2,3,4,5};
	struct matrix m = { 1,5,v };
	double *new = matrix_snake(&m);


}