#include "matrix.h"
int main(void)
{
	double a[] = { 1,2,3,5,6,7,9,10,11,13,14,15 };
	struct matrix mat = { 4,3,a };
	struct matrix *mirrror = mirror_mat(&mat);



}