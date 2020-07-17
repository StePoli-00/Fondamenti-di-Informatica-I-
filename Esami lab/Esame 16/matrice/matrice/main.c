#include "matrix.h"

int main(void)
{
	double a[] = { 1,2,3,4,5,6 };
	struct matrix A={ 3, 3, a };
	struct matrix *B =mat_rad( &A,2);

}