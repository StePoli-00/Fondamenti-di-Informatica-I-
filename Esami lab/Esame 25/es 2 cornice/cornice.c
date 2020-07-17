#include <stdio.h>
#include <stdint.h>
void stampa_cornice(size_t n)
{
	if (n > 0)
	{

		for (size_t i = 0; i < n; ++i)
		{
			printf("  .--.     ");
		}
		printf("\n");

		for (size_t i = 0; i < n; ++i)
		{
			printf(":::::.");
			printf("\\");
			printf("::::");
		}
		printf("\n");

		for (size_t i = 0; i < n; ++i)
		{
			char b = 96;
			printf("       %c--'", b);
			
		}
		printf("\n");
	}

}