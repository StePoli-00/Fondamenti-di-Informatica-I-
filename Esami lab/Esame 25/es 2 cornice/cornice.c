#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
void stampa_cornice(size_t n)
{
	if (n <= 0)
	{
		return;
	}

	

		for (size_t i = 0; i <n; i++)
		{
			printf(" .--.");
			for (size_t i = 0; i < 5; i++)
			{
				printf(" ");
			}
		}
		printf("\n");
		for (size_t i = 0; i < n; i++)
		{
			printf("::::.\\::::");
		}
		printf("\n");
		char c = 96;
		for (size_t i = 0; i < n; i++)
		{
			printf("      %c--'", c);
		}
		printf("\n");
	

		return;

}