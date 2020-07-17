#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
bool is_perfect(uint32_t n)
{
	if (n == 0|| n==1)
	{
		return false;
	}
	
	uint32_t num = n;
	uint32_t val = 0;
	uint32_t i = 1;
	for (uint32_t j = 0; j < n-1; ++j)
	{
		if (num % i == 0)
		{
			val += i;
		}
		++i;
	}
	if (n == val)
	{
		return true;
	}
	else
	{
		return false;
	}

	



}