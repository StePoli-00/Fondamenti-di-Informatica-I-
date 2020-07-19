#include "matrix.h"

int main(void)
{

	double v[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	size_t ir = 0;

	size_t ic = 0;
	struct matrix m = { 3,5,v };
	struct matrix *new = mat_reset_cross(&m, ir, ic);

}
