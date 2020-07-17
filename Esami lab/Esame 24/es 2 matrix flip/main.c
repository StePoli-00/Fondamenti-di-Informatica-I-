#include "matrix.h"
int main(void)
{

	double v[] = { 1,3,2,2,3,1 };
	struct matrix m = { 2,3,v };
	struct matrix *new = matrix_flip_h(&m);


}
