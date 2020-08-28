#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
int prodotto_altri_due(const int *v, size_t n)
{
	if (v == NULL || n == 0)
	{
		return -1;
	}
	int cnt = 0;
	int prod = 0;
	int pr = 0;
	
	for (size_t i = 0; i < n; i++)
	{
		
		for (size_t k =0; k < n; k++)
		{
			if (k != i)
			{
				prod = v[i] * v[k];
			}
			else
			{
				prod = v[i] * v[k];
			}
			for (size_t j = 0; j < n; j++)
			{
				if (v[j] == v[k])
				{
					continue;
				}
				if (prod == v[j])
				{
					++cnt;
				}
			}
		}
	}
		
	return cnt;
}