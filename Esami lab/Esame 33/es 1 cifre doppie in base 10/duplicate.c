#include <stdbool.h>
#include <stdlib.h>
#include <stdint.h>
bool cifre_duplicate(unsigned long long n)
{
	unsigned long long val = n;
	size_t dim = 0;
	while (val != 0)
	{
		val /= 10;
		++dim;
	}
	if (dim == 0)
	{
		return false;
	}
	val = n;
	unsigned long long *v = malloc(dim*sizeof(unsigned long long));
	for (size_t i=dim; i!=0; --i)
	{
		v[i-1] = val%10;
		val /= 10;
	}
	val = 0;
	for (size_t i = 0; i < dim; i++)
	{
		val = v[i];
		for (size_t  j= 0; j< dim; ++j)
		{
			if (i != j && v[j] == val)
			{
				free(v);
				return true;
			}
		}
	}
	free(v);
	return false;
}