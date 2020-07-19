#include "matrix.h"

int main(void)
{
	double v[] = { 1,4,7,};
	struct matrix m = { 3,1,v };
	struct matrix *new = rotate_v(&m,2);


}