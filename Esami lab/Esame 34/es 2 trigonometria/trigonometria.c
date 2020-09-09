#include <stdint.h>
#include <stdlib.h>
double seno_iperbolico(double x)
{
	if (x == 0)
	{
		return 0;
	}
	double num = 0;
	double fatt = 1;
	double senh = 0;
	double el = x;
	senh += ((1 / fatt)*el);
	double prec = 0;
	double ris = 0;
	fatt = 1;
	el = x;
	int i = 1;
	while (1)
	{
		num = (2 * i) + 1;
		for (size_t j =1; j <=num; j++)
		{
			fatt *= j;

		}
		for (size_t j = 1; j < num; j++)
		{
			el *= x;
		}
		
		ris=((1 / fatt)*el); 
		senh += ris;
		if (ris == prec)
		{
			break;
		}
		prec = ris;
		
		fatt = 1;
		el = x;
		++i;
	}
	return senh;
}