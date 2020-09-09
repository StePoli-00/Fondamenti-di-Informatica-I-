#include <stdint.h>
#include <stdlib.h>
int *clamped(const int *v, size_t n, int min, int max)
{
	if (v == NULL || min > max || n == 0)
	{
		return NULL;
	}
	int *vec = malloc(n* sizeof(int));
	size_t j = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (v[i] < min)
		{
			vec[j] = min;
			++j;
		}
		else if (v[i] > max)
		{
			vec[j] = max;
			++j;
		}
		else if (v[i] >= min && v[i] <= max)
		{
			vec[j] = v[i];
			++j;
		}
	}
	return vec;
}