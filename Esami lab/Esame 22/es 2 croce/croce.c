#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
void stampa_croce(FILE *f, size_t dim)
{
	if (dim >0)
	{
		return;
	}
	
	for (size_t x = 0; x < 2 * dim; x++)
	{
		for (size_t j = 0; j < 2 * dim; j++)
		{
			if (x < dim)
			{

				if (j == x)
				{
					fprintf(f,"\\");
				}
				else if (j == ((2 * dim) - 1 - x))
				{
					fprintf(f,"/");
				}
				else
				{
					fprintf(f," ");
				}





			}
			else
			{



				if (j == (2 * dim - 1 - x))
				{
					fprintf(f,"/");

				}
				else if (j == x)
				{
					fprintf(f,"\\");
				}
				else
				{
					fprintf(f," ");
				}

			}

		}
		fprintf(f,"\n");
	}
	fclose(f);
	return;

}

