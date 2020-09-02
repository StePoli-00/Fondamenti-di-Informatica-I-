#include <math.h>
#include "rectangle.h"
int find_largest(const struct rect *r, size_t n)
{
	if (r == NULL || n == 0)
	
		return -1;
	size_t j = 0;
	int *rec = malloc(n * sizeof(int));
	double n1 = 0,n2 = 0;
		for (j; j < n; j++)
		{

			n1 = (r[j].a.x*r[j].b.x)*(r[j].a.x*r[j].b.x);
			 n2 = (r[j].a.y*r[j].b.y)*(r[j].a.y*r[j].b.y);
			double b = sqrt(n1 - n2);
		
			rec[j] =(int) b *(int)h;
		
		}
	int max = rec[0];
	size_t i = 0;
	for (i; i <n; ++i)
	{
		if (rec[i]>max)
		{
			max = rec[i];
		}

	}

	free(rec);
	return max;

}