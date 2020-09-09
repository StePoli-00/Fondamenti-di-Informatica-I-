#include "matrix.h"
int main(void)
{
	double v[] = { 1,2,3,4,5,6,7,8,9 };
	struct matrix m = { 3,3,v };
	struct vector *v1 = mat_vectorize(&m, BY_COLUMN);



}