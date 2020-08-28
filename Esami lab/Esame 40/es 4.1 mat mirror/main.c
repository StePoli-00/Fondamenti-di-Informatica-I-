#include "matrix.h"
int main(void)
{


	double v1[] = { 1,2,3,4,5,6,7,8,9 };
	struct matrix m1 ={ 3,3,v1 };
	double v[] = { 1,2,3,5,6,7,9,10,11,13,14,15};
	struct matrix m = { 4,3,v };
	struct matrix *new = mirror_mat(&m1);
}