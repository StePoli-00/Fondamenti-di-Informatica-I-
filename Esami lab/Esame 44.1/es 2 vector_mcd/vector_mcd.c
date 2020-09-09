#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
uint32_t mcd(uint32_t m, uint32_t  n)
{
	if (m == 0 || n == 0)
	{
		return 0;
	}
	while (m!= n)
	{
		if (m < n)
		{
			uint32_t tmp =m;
			m = n;
			n = tmp;
		}
		m -=n;
	}
	return m;
}
uint32_t vector_MCD(const uint32_t *v, size_t n)
{
	if (v == NULL || n == 0)
	{
		return 0;
	}
	for (size_t i = 0; i < n; i++)
	{
		
	
		if (v[i] == 0)
		{
		
			return 0;
		}
	}
	size_t cnt = 0;
	uint32_t m = 0;
	for (size_t i = 0; i < n; i++)
	{
	
		m=mcd(v[i],v[i + 1]);

		for (size_t j= 0; j < n; j++)
		{
			if (v[j] % m == 0)
			{
				++cnt;
			}
		}
		if (cnt == n)
		{
		
			break;
		}
		cnt = 0;

	}
	return m;
}
