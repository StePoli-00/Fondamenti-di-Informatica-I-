#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
int *rimuovi_multipli(const int *v, size_t size, size_t *newsize)
{
	int cnt = 0;
	int k = 0;
	bool multiple = false;

	int *vett = malloc(size * sizeof(int));

	for (size_t i = 0; i < size; ++i)
	{
		for (size_t j =0; j < size; ++j)
		{
			if (v[i] == v[j])
			{
				continue;
			}
			
			if (v[i]% v[j] == 0)
			{
			
				multiple = true;
			}
			
		}
	if(multiple==false)
	{ 
		vett[k] = v[i];
		++k;
		++cnt;
		
	}
	multiple = false;
	}
	*newsize = cnt;
	vett = realloc(vett, sizeof(int)*(cnt));
	return vett;



}

