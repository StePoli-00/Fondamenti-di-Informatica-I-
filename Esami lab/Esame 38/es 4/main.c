#include "matrix.h"

int main(void)
{
	double a[] = { 1,2,3,4,5,6,7,8,9 };
	struct matrix mat ={ 3,3,a };
	struct  matrix *mat2 = mat_delete_row(&mat, 1);



}