#include <stdint.h>
#include <stdlib.h>
int *convolution3(const int *v, size_t lenv, const int k[3])
{
	if (v == NULL || lenv == 0 || k == NULL)
	{
		return NULL;
	}
	size_t j = 0;
	int n = 0;
	for (size_t i = 0; i < lenv; i++)
	{
		if (i >= 0 && i < lenv)
		{
			n = v[i];
		}
		else
		{
			n = 0;
		}
		for (size_t m = 0; m <2;m++)
		{
		
			c[i]=v[n+1-]
		}
	}



}