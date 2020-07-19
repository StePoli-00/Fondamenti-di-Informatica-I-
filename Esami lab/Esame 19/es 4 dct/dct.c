#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
void dct(const double *in, double *out, size_t N)
{
	if (N ==0)
	{
		return;
	}
	double n = N;
	
	for (size_t i = 0; i < N; i++)
	{
		double a = 0;
		double rad = 0;
		if (i== 0)
		{
			  rad= 1 /n;
			
		}
		else
		{

			rad = 2 /n;
		
			
		}
		a = sqrt(rad);
		size_t j = 0;
		double prod = 0;
		for (size_t x = 0; x <N; x++)
		{
			double div = ((2 *i + 1)*(i *3.14)) /( 2 * n);
			double c = cos(div);
			prod += in[j] * c;
			++j;
		}
		out[i] = a * prod;
	}
	return;



}