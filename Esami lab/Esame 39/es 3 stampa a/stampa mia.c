#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
void stampa_a(uint8_t n)
{

	if (n % 2 == 0 || n < 3)
	{
		return;
	}
	size_t spe = n + n;
	size_t spi = 0;
	size_t barra = n / 2;
	size_t num = (size_t)n;
	for (size_t i = 0; i < num; i++)
	{
		for (size_t i = 0; i < spe; i++)
		{
			printf(" ");
		}
		printf("/");
		if (i == barra)
		{
			for (size_t i = 0; i <num-1; i++)
			{
				printf("-");
			}
		}
		else {
			for (size_t i = 0; i <spi; i++)
			{
				printf(" ");
			}
		}
		printf("\\\n");
		--spe;
		spi += 2;

		

	}
	return;
}