#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
void cornice(uint8_t h, uint8_t w)
{
	if (h == 0 || w == 0)
	{
		return;
	}
	size_t cnt = 0;	
	for (size_t i = 0; i < h ; i++)
	{
		if (i == 0)
		{
			for (size_t j = 0; j < w; j++)
			{
				printf("/-\\");
				cnt += 3;
				if (j != w - 1)
				{printf("|");
				++cnt;
				}
			}
			printf("\n");
		}
		else
		{
			printf("/");
			for (size_t j = 0; j < cnt - 2; j++)
			{
				printf(" ");
			}
			printf("\\\n");
		}
		printf("|");
		for (size_t j = 0; j < cnt-2; j++)
		{
			printf(" ");
		}
		printf("|");
		printf("\n");
		if (i ==h-1)
		{
			for (size_t j = 0; j < w; j++)
			{
				printf("\\-/");
				cnt += 3;
				if (j != w - 1)
				{
					printf("|");
					++cnt;
				}
			}
			printf("\n");

		}
		else
		{
			printf("\\");
			for (size_t j = 0; j < cnt - 2; j++)
			{
				printf(" ");
			}
			printf("/\n");
			printf("-");
			for (size_t j = 0; j < cnt - 2; j++)
			{
				printf(" ");
			}
			printf("-\n");
		}



	}
	return;
}

	