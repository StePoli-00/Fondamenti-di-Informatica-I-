#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
void reverse(int *vec, size_t len, size_t from, size_t to)
{
	if(!vec || from >= to || from >= len || to > len)
	{
		return;
	}
	
	int *v = malloc(len * sizeof(len));
	if (to + from == len)
	{

		size_t j = len-1;
		for (size_t i = 0; i < len; ++i)
		{
			v[i] = vec[j];
			--j;
		}
		for (size_t i = 0; i < len; ++i)
		{
			vec[i] = v[i];

		}

		free(v);
		return;
		
		
	}
	
	for (size_t i = 0; i < len; ++i)
	{
		if (i == from)
		{
			for (size_t j =to; j!=from; --j)
			{
				v[i] = vec[j-1];
				++i;
				

			}
			
		}
		v[i] = vec[i];

	}
	
	for (size_t i = 0; i < len; ++i)
	{
		vec[i] = v[i];
	}
	
	free(v);
	return;

}