#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
int mcd( int m, int n)
{
	while (m != n)
	{
		if (n > m)
		{
			unsigned int tmp = m;
			m = n;
			n = tmp;
		}
		m -= n;
	}
	return m;

}
size_t mcm(int a, int b)
{
	if (a == 0 || b == 0)
	{
		return 0;
	}
	if (a < 0)
	{
		a *= -1;
	}
	if(b < 0)
	{
		b *= -1;
	}
	int c=mcd(a,b);
	size_t  ris= ((a / c)*b);
	return ris;
}