#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
void stampa_a(uint8_t n)
{

	if (n % 2 == 0 || n < 3)
	{
		return;
	}

	int aperto = n;
	int chiuso = n + 1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j <= n * 2; ++j)
		{

			if (j != 0)
			{
				if (j == aperto)
				{
					printf("/");

				}
				else
				if (j == chiuso)
				{
					printf("\\");
				}
				else if (i == n / 2 && j > aperto && j < chiuso)
				{
					printf("-");
				}
				else
				{
					printf(" ");
				}
			}
			
			else printf(" ");

		}
	printf("\n");
	--aperto;
	++chiuso;
	}

}


