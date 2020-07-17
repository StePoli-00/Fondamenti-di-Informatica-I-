#include "matrix.h"
#include <stdlib.h>
 extern struct matrix *mat_reset_cross(const struct matrix *m, size_t ir, size_t ic);

 int main(void)
 {

	 double b[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15 };
	 struct matrix a = { 3, 5,b };
	 struct matrix *c = mat_reset_cross(&a,0,0);
	 free(c);



 }