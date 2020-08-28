#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
int *unici(const int *vec,size_t size, size_t *newsize)
{
	if (vec == NULL)
	{
		*newsize = 0;
		return NULL;
	}
	int *v = malloc(size * sizeof(int));
	int *new= malloc(size* sizeof(int));
	for (size_t i = 0; i < size; i++)
	{
		v[i] = vec[i];
	}
	int n = 0;
	int k = 0;
	new[0] = v[0];
	++n;
	++k;
	for (size_t i = 0; i < size; i++)
	{
		bool is = 0;
		for (size_t j = 0; j < n; j++)
		{
			if (i == j)
			{
				continue;
			}
			if (v[i] != new[j])
			{
				is = 1;
			}
			else
			{
				is = 0;
				break;
			}
			
		}
		if (is == 1)
		{
			new[k] = v[i];
			++n;
			++k;
		}
		

	}
	new = realloc(new, n * sizeof(int));
	*newsize = n;
	free(v);
	return new;


}
