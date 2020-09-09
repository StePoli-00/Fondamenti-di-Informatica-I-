#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

size_t gelate(const char *a, size_t n)
{

	if (a == NULL)
	{
		return 0;
	}
	char *num = malloc(n * sizeof(char));
	for (size_t i = 0; i < n; i++)
	{
		num[i] = a[i];
	}

	size_t cnt = 0;
	for (size_t i = 0; i < n; i++)
	{
		size_t j = i + 1;
		if (num[i] > 0 && num[j]<=0)
		{
			++j;
			if (num[j] <= 0)
			{

				while (num[j] <= 0)
				{
					++j;
				}
				i = j;
			}
			++cnt;

		}

	}
	free(num);
	return cnt;

}