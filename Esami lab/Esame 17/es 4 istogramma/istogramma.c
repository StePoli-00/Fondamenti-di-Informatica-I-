#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
void disegna(uint8_t *h, size_t n, FILE *fout)
{
	if (n == 0)
	{
		return;
	}
	if (n == 1)
	{
		for (size_t i = 0; i<h[0]; i++)
		{
			fprintf(fout, "|");
		}
		fprintf(fout, "\n");
		return;
	}
	int max = 0;
	for (size_t i = 0; i <n; i++)
	{
		if (h[i] > max)
		{
			max = h[i];
		}

	}
	int nn = max;
	for (int i = 0; i < (int)nn; i++)
	{
		for (int i = 0; i < n; i++)
		{
			if (h[i] >= max)
			{
				fprintf(fout, "|");
			}
			else
			{
				fprintf(fout, " ");
			}

		}
		fprintf(fout, "\n");
		--max;
	}
	return;
}
