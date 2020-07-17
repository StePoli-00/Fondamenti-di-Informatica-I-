
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void print_board(FILE *f, const unsigned short board[4][4])
{

	if (f == NULL)
	{
		return;
	}
	int j = 0;
	while (j != 4)
	{
		
		
		fprintf(f, "+----+----+----+----+");
		printf("\n");

		for (int i = 0; i < 4; ++i)
		{
			if (board[j][i] != 0)
			{
				if (i == 0)
				{
					fprintf(f,"|%4i|", board[j][i]);
				}
				else
				{ 
					fprintf(f,"%4i|", board[j][i]);
				}
			}
			else
			{
				if (board[j][i] == 0 && i==0)
				{
					fprintf(f,"|%4 |");
				}
				else
				{
					fprintf(f,"%4 |");
				}
			}
		}
		++j;
		fprintf(f,"\n");
		if (j == 4)
		{
			fprintf(f, "+----+----+----+----+\n");
		}
		
	}
	return;
	


}