#include "bytearray.h"
uint8_t *absdiff(const uint8_t *a, const uint8_t *b, size_t n)
{
	if (n == 0)
	{
		return NULL;
	}
	uint8_t *diff = malloc(n * sizeof(uint8_t));
	uint8_t *n1= malloc(n * sizeof(uint8_t));
	uint8_t *n2 = malloc(n * sizeof(uint8_t));
	n1 = memcpy(n1, a, n);
	n2 = memcpy(n2, b, n);
	for (size_t i = 0; i < n ; i++)
	{
		if (n1[i] > n2[i])
		{
			diff[i] = n1[i] - n2[i];
		}
		else
		{
			diff[i] = n2[i] - n1[i];
		}
	}
	free(n1);
	free(n2);
	return diff;
}
