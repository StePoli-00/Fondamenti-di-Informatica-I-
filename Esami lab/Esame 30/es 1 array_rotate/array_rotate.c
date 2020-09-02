#include <stdint.h>
#include <stdlib.h>
#include <string.h>
int *rotate(const int *vec, size_t len, size_t r)
{
	if (vec == NULL || len == 0)
	{
		return NULL;
	}
	int *v = malloc(len * sizeof(int));
	int *vet = malloc(len * sizeof(int));
	for (size_t i = 0; i < len; i++)
	{
		vet[i] = vec[i];
	}
	for (size_t k =1; k <= r; k++)
	{
		size_t j = 0;
		size_t x = 0;
		for (size_t i = 0; i < len; i++)
		{
		
			if((j+1)>len-1)
			{
				x=0;
			}
			else
			{
				x = j + 1;
			}
			v[x] = vet[i];
			++j;

		}
		for (size_t i = 0; i < len; i++)
		{
			vet[i] = v[i];
		}
	}
	free(vet);
	return v;

}
