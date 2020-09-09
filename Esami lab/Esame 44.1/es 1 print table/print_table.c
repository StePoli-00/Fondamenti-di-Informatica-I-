#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void print_table(char **colnames, uint8_t ncols, uint8_t nrows)
{
	if (colnames == NULL || ncols == 0 || nrows == 0)

	{
		return;
	}
	size_t n = ncols;
	size_t dim =0;
	for (size_t i = 0; i < n; i++)
	{
		printf("|%-s", colnames[i]);
		dim = strlen(colnames[i]);
		for (size_t i = 0; i < (9 - dim); i++)
		{
			printf(" ");
		}

	}
	printf("|\n");
	for (size_t i = 0; i <=(size_t)nrows; i++)
	{
		for (size_t i = 0; i < n; i++)
		{
			printf("+---------");

		}
		printf("+\n");
		if (i == nrows)
		{
			continue;
		}
		for (size_t i = 0; i < n; i++)
		{
			printf("|");
			for (size_t i = 0; i < 9; i++)
			{
				printf(" ");


			}
			
		}
		printf("|\n");
	}
	return;
	

}

	

	
