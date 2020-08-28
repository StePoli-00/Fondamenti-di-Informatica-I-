#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void print_table(char **colnames, uint8_t ncols, uint8_t nrows)
{

	if (nrows == 0 || ncols == 0)
	{
		return;
	}
	size_t ncol = ncols;
	size_t nrow = nrows;
	for (size_t i = 0; i <=nrow ; i++)
	{
		if (i == 0)
		{
			for (size_t i = 0; i < ncol; i++)
			{
				printf("|%-s", colnames[i]);
				size_t   n = strlen(colnames[i]);
				size_t diff = 9 - (n);
				for (size_t j = 0; j < diff; j++)
				{
					printf(" ");
				}
			}

			printf("|");
			printf("\n");
		}
		else
		{
			printf("|");
			for (size_t i = 0; i < (ncol); ++i)
			{
				
				for (size_t i = 0; i < 9; i++)
				{
					printf(" ");
				}
				printf("|");

			}
			printf("\n");
		}
		for (size_t i = 0; i < ncol; i++)
		{
			printf("+");
			for (size_t i = 0; i < 9; i++)
			{

				printf("-");

			}
		}
		
		printf("+");
		printf("\n");
		
	}
	return;
}