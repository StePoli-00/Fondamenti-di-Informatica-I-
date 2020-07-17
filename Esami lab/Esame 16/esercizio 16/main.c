#include "matrix.h"

int main(void)
{
	double a[] = { 1,2,3,4,5,6,7,8,9 };
	struct matrix A = { 3,3,a };
	int x = 2;
	struct matrix *B = mat_scale(&A, x);
	free(B);
}