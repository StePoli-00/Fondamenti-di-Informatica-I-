#include "matrix.h"
int main(void)
{
	double v1[] = { 1, 0,1,0,2,3 };
	double v2[] = { 9,8,7,6,5,4};
	struct matrix m1 = { 2,3,v1 };
	struct matrix m2 = { 2,3,v2 };
	double k = 2.50;
	bool is = false;
	scalar_mult(&m1, &m2, k, is);


}