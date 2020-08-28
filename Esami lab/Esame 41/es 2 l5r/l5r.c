#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
int roll_and_keep(const int *r, size_t x, size_t y)
{
	if (r == NULL || y == 0 || y > x)
	{
		return 0;
	}
	int media = 0;

	for (size_t i = 0; i < x; i++)
	{
		media += r[i];
	}
	media /= x;
	int *v = malloc(y * sizeof(int));
	int sum = 0;
	int j = 0;
	for (size_t i = 0; i < x; i++)
	{
		if (r[i] >= media)
		{
			if (j != y)
			{
				v[j] = r[i];
				++j;
			}
			else
			{
				for (size_t k = 0; k < j; k++)
				{
					if (r[i] > v[k])
					{
						v[k] = r[i];
					}
				}
			}
		}
	}
	for (size_t i = 0; i < y; i++)
	{
		sum += v[i];
	}
	free(v);
 return sum;


}
