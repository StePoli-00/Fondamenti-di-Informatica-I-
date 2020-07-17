#include <stdlib.h>
#include <stdint.h>
int *rotate(const int *vec, size_t len, size_t r)
{
	int *p = malloc(len * sizeof(int));
	for (int i = 0; i < len; ++i)
	{
		if (r > len)
		{
			p[0] = vec[i + r];
		}
		else
		{
			p[i] = vec[i + r];
		}

	}
}