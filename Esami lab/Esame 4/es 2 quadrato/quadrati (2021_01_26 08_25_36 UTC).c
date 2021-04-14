#include "quadrati.h"
void stampa_quadrato(unsigned int lato)
{
	if (lato == 0)
	{
		return;
	}
	for (size_t i = 0; i < lato; i++)
	{
		printf("*");
	}
	printf("\n");
	for (size_t i = 0; i < (lato-2); i++)
	{
		printf("*");
		for (size_t i = 0; i < (lato-2); i++)
		{
			printf(" ");
		}
		printf("*");
		printf("\n");
	}
	for (size_t i = 0; i < lato; i++)
	{
		printf("*");
	}
	printf("\n");
	return;


}