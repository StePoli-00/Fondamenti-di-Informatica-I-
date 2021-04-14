#include "matrix.h"
int main(void)
{
	double v[ ]= {1,2,3,4,5,6 };
	struct matrix m = { 2,3, v };
	struct matrix *new = mat_pad(&m);




}