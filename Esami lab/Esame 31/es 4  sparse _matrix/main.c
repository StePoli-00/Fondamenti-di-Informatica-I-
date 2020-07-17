#include "matrix.h"
int main(void)
{
	double a[] = { 7, 9, 5, };
	uint32_t rows[] = { 1,2,3 };
	uint32_t cols[] = { 1,3,2 };
	struct sparse_matrix b = { 4,4,3, rows, cols,a };
double c=sm_get(&b, 1, 3);





}
