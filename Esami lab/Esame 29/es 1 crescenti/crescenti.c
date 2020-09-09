#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
bool crescente(unsigned int x)
{
	unsigned int val = x;
	size_t n = 0;
	while (val != 0)
	{
		val /= 10;
		++n;
	}
	if (n == 1)
	{
		return true;
	}
	val = x;
	unsigned int *num = malloc(n*(sizeof(unsigned int)));
	for (size_t i = n; i != 0; --i)
	{
		num[i - 1] = val % 10;
		val /= 10;
	}
	for (size_t i = 0; i < n; i++)
	{
		if (num[i] > (num[i + 1]))
		{
			free(num);
			return false;
		}

	}
	free(num);
	return true;


}