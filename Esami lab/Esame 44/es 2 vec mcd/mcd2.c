#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
uint32_t MCD(uint32_t m, uint32_t n)
{
	while (m != n)
	{
		if (n > m)
		{
			uint32_t tmp = m;
			m = n;
			n = tmp;
		}
		m -= n;

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

	uint32_t mcd = 0;
	for (size_t i = 0; i < n; i++)
	{
		
		for (size_t j =i+1; j <=n; j++)
		{
			size_t cnt = 0;
			mcd = MCD(v[i], v[j]);
			for (size_t i = 0; i < n; i++)
			{
				if (v[i] % mcd == 0)
				{
					++cnt;
				}
				break;
			}
			if (cnt == n)
			{
				return mcd;
			}
		}
	}
	return mcd;

}

