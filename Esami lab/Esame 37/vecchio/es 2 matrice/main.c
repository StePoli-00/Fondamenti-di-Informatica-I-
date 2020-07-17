
#include "matrice.h"

extern struct matrix *mat_rendiquadrata(const struct matrix *a);
int main(void)
{

	
		double A[3*2]=
		{ 1,2,
		3,4
		,5,6,
		};
		double *p = 0;
		struct matrix adata={3,2,p};

		struct matrix  *B=mat_rendiquadrata(&adata);







	
	/*size_t rows[3] = { 1,2,3, };
	size_t cols[2] = { 4,5, };
	double *p=0;
	struct matrix  A = { rows,cols,p };*/

	



 }
