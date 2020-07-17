#include "rectangle.h"
#include <stdint.h>
#include <math.h>
#include <stdlib.h>
int find_largest(const struct rect *r, size_t n)
{
		
	if(r==NULL || n==0)
	{
		return -1;
	}
	const struct rect *rett = malloc(n * sizeof(struct rect));
	 rett = r;
	double area = 0;
	double  max = 0;
	int i = 0; 
	unsigned dstx = 0;
	unsigned dsty = 0;
	double base = 0;
	double h = 0;

	while (i != n)
	{
		if (rett[i].a.y == rett[i].b.y || (rett[i].a.x == rett[i].b.x))
		{
			dstx = rett[i].b.x - rett[i].a.x;
			dstx *= dstx;
			dsty = rett[i].b.y - rett[i].a.y;
			dsty *= dsty;
			base = sqrt(dstx + dsty);
			++i;
			dstx = rett[i].b.x - rett[i].a.x;
			dstx *= dstx;
			dsty = rett[i].b.y - rett[i ].a.y;
			dsty *= dsty;
			h = sqrt(dstx + dsty);

			area = base * h;
			if (area > max)
			{
				max = area;
			}
		}
		++i;
		

	}
	free(rett);
	return max;
	

}