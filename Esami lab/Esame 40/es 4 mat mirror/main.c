#include "matrix.h"
int main(void)
{
	double a[] = { 1,2,3,4,5,6,7,8,9,10,11,12};
	struct matrix mat = { 3,4,a };
	struct matrix *mirror = mirror_mat(&mat);



}