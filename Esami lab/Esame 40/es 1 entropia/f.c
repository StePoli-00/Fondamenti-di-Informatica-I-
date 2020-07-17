#include <math.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
double entropia(const double *v, size_t n)
{
	if(v ==NULL|| n==0)
	{
		return 0;
	}
	double ris= 0;

	for (size_t  i = 0; i < n; ++i)
	{

		if (v[i] != 0)
		{
			ris += v[i] * log2(v[i]);
		}
	}
	return -ris;



}