
#include "matrix.h"
int main(void)
{
	
	FILE *f = fopen("A.txt", "r");
	if (f != NULL)
	{
		struct matrix a;
		bool is = matrix_read(&a, f);
	}

}
