#include <stdint.h>
#include <stdbool.h>
#include <math.h>
bool armstrong(size_t n)
{
	size_t val = n;
	size_t k = 0;
	while (val != 0)
	{
		++k;
		val /= 10;

	}
	double sum = 0;
	val = n;
	while (val!= 0)
	{
		double v = val% 10;
		
		sum+=pow(v, k);
		val/= 10;

	}
	if(sum==n)
	{
		return true;

	}
	else
	{
		return false;
	}

}