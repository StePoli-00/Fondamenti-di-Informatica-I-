#include <stdint.h>
#include <stdlib.h>
#include <string.h>
size_t gelate(const char *a, size_t n)

{
	if (a == NULL)
	{
		return 0;
	}
	

	char *v = malloc(n * sizeof(int));
	for (size_t i = 0; i < n; ++i)
	{
		v[i] = a[i];

	}
	int gel = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (i + 1 < n)
		{
			if (v[i] > 0 && v[i + 1] <= 0)
			{
				++gel;
			while (v[i] <= 0 && v[i + 1] <= 0)
			{
			++i;
			}
			}
		}
	}
	free(v);
	return gel;
}