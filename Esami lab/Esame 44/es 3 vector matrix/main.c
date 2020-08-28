#include "matrix.h"
int main(void)
{

	double v[] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	struct matrix m = { 2,6,v };
	struct vector *a = mat_vectorize(&m, BY_ROW);

}