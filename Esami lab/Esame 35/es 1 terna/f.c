#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdint.h>
bool is_terna_pitagorica(unsigned int v[3])
{
	int max = 0;
	for (int i = 0; i < 3; ++i)
	{
		if (v[i] > max)
		{
			max = v[i];
		}
	}
int num = 0;
	for (int i = 0; i < 3; ++i)
	{
		if (v[i] != max)
		{
			num += v[i] * v[i];
		}
	
	}
	if (num == (max*max))
	{
		return true;
	}
	else
	{
		return false;
	}

}