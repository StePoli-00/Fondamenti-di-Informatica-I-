#include <stdint.h>
#include <stdlib.h>
unsigned int *tartaglia(unsigned int *v, size_t n)
{
	if (n == 0)
	{
		unsigned int *vett = malloc(1 * sizeof(unsigned int));
		vett[0] = 1;
		return vett;
	}
	if (n == 1)
	{
		unsigned int *vett = malloc(2 * sizeof(unsigned int));
		vett[0] = 1;
		vett[1] = 1;
		return vett;
	}
	else
	{
		unsigned int *vett = malloc((n + 1) * sizeof(unsigned int));
		int j = 0;
		vett[j] = 1;
		vett[n] = 1;
		for (size_t i = 0; i < n-1; ++i)
		{
			vett[j+1] = v[i] + v[i + 1];
			++j;
		}
		return vett;
	}
	
}