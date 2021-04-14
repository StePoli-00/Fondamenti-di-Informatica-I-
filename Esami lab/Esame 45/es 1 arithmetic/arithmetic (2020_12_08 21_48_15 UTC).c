#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
bool is_arithmetic(const int *v, size_t n)
{
	if (v == NULL || n == 0 || n==1)
	{
		return false;
	}
	if (n == 2 )
	{
		return true;
	}
	int diff = v[0] - v[1];
	int diff2 = 0;
	size_t cnt = 1;
	for (size_t i =1; i <n-1; i++)
	{
		diff2= v[i] - v[i+1];
		if (diff2 == diff)
		{
			++cnt;
		}
	}

	if (cnt == n-1)
	{
		return true;
	}
	else
	{
		return false;
	}
}
