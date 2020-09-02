#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <stdio.h>
void ordina(int *v, size_t n)
{
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = i + 1; j < n; j++)
		{
			if (v[i] > v[j])
			{
				int tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}
		}
	}
	return;
}
int roll_and_keep(const int *r, size_t x, size_t y)
{
	if (r == NULL || y == 0 || y > x)
	{
		return 0;
	}
	int *v = malloc(x * sizeof(int));
	for (size_t i = 0; i < x; i++)
	{
		v[i] = r[i];
	}
	ordina(v, x);
	size_t j = 0;
	int *k = calloc(y, sizeof(int));
	for (size_t i = 0; i < x; i++)
	{

		if (v[i] > k[j])
		{
			if (j == y)
			{
				j = 0;
			}
			k[j] = v[i];
			++j;
		}

	}
	int sum = 0;
	for (size_t i = 0; i < y; i++)
	{
		sum += k[i];
	}
	free(k);
	free(v);
	return sum;
}