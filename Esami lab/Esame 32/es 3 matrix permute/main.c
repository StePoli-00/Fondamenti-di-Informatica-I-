#include "matrix.h"

int main(void)
{
	double a[] = { 1,2,3,0.5,4,5,6,7,0.6,7,8,9,0.23};
	struct matrix mat = { 3,4,a };
	 size_t p[] = {1,2,0 };
	struct matrix *new = mat_permute_rows(&mat, p);

}