#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdint.h>
double *probabilita(const uint32_t *v, size_t n)
{
	if (v == NULL || n == 0)
	{
		return NULL;
	}
	int cnt = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (v[i] == 0)
		{
			++cnt;
		}
	}
	if (cnt == n)
	{
		return NULL;
	}

	double *vett = malloc(n * sizeof(double));
	for (size_t i = 0; i < n; ++i)
	{
		vett[i] = v[i];

	}
	double * ris= malloc(n * sizeof(double));
	for (size_t i = 0; i < n; i++)
	{
		double val = 0;
		for (size_t k = 0; k < n; ++k)
		{
			val += vett[k];
		}
		ris[i] = vett[i] / val;
		
	}
		
	free(vett);
	return ris;
}

