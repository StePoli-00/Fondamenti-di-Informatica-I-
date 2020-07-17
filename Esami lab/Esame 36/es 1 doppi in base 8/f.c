
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
unsigned int pow(unsigned int num, int n)
{
	if (n == 0)
	{
		return 1;
	}

	for (int i = 0; i < n-1; ++i)
	{
		num *= 8;
	}
	return num;
}


bool cifre_duplicate_oct(unsigned int n)
{

	unsigned int val = n;
	
	int cnt = 0;
	while (val != 0)
	{
		val /= 10;
		++cnt;
	}
unsigned int *p = malloc(cnt * sizeof(unsigned int));
val = n;
int i = cnt - 1;
while (val != 0)
{
	p[i] = val % 10;
	val /= 10;
	--i;
}
int k = cnt;
cnt = 0;
	for (int i = 0; i <k; ++i)
	{
		for (int j = i + 1; j < k; ++j)
		{
			if (p[i] == p[j])
			{
				++cnt;
			}
		}

	}
	if (cnt != 0)
	{
		free(p);
		return true;

	}
	else
	{
		free(p);
		return false;

	}
}





