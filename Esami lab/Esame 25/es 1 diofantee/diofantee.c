#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
int ammette_soluzioni(int a, int b, int c)
{
	if (a == 0 && b == 0 && c==0)
	{
		return 1;

	}
	else if(a==0 && b==0 && c!=0)
	{
		return 0;
	}
	
	if (a < 0)
	{
		a *= -1;
	}
	if (b < 0)
	{
		b *= -1;
	}
	if (a != 0 && b != 0)
	{
		while (a != b)
		{

			if (a < b)
			{
				int tmp = a;
				a = b;
				b = tmp;
			}
			a -= b;
		}
	}
	if (a == 0 && b != 0)
	{
		a = b;
	}
	if (c%a == 0)
	{
		return 1;
	}
	else
	{
		return 0;
	}


}
