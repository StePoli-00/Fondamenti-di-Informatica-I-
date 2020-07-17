#include <stdlib.h>
#include<stdio.h>
int *prodotto(const int *v, size_t n)
{
	int val = 0;
	int p = 1;
	
	int k = 0;
	if (n == 0 || n == 1 || v==NULL)
	{
		return NULL;
	}
	int *prod = malloc(n * sizeof(int));
	for (size_t i = 0;i<n; ++i)
	{
		val = v[i];
		for (size_t j = 0; j < n ; ++j)
		{
			if (v[j] != val)
			{
				p*= v[j];
					
			}

		}
		prod[k] = p;
		p= 1;
		++k;
	}
	return prod;


}
