#include <stdio.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
unsigned int irpef(unsigned int stipendio, unsigned int *scaglioni, unsigned int *aliquote, size_t n)
{

	
	unsigned int sum = 0;
	unsigned int tot = 0;

	size_t j = -1;
	for (size_t i = 0; i < n; i++)
	{
		if (stipendio < scaglioni[i])
		{
			j = i - 1;
			break;
		}
	}
	if (j == -1)
	{
		j = n - 1;
	}

		for (size_t i = 0; i < j; i++)
		{
			sum=(scaglioni[i + 1] - scaglioni[i])*aliquote[i] / 100;
			tot += sum;
		}
		
	
	tot += (stipendio - scaglioni[j])*aliquote[j] / 100;
	return tot;
}
		