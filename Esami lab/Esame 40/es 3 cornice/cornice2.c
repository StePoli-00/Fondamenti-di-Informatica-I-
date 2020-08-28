#include <stdint.h>
#include <stdio.h>
void cornice(uint8_t h, uint8_t w)
{

	if (h == 0 || w == 0)
	{
		return;
	}
	int h1 = h;
	int h2 = w;
	int pattern = w;
	int cnt = 0;
	int i = 0;
	while (i != h+1)
	{
		if (i == h && cnt == h - 1)
		{
			break;
		}
		if (i == 0)
		{
			for (size_t i = 0; i < w; i++)
			{
				printf("/-\\");
				if (i != w - 1)
				{
					printf("|");
				
				}
			}
			++i;
			++cnt;
		}
		else
		{
			printf("\n");
			int space = (w * 4) - h;
			switch (cnt)
			{
			case 0: printf("/");
				break;
			case 1:printf("|");
				break;
			case 2:printf("\\");
				break;
			case 3:printf("-");
				break;
			}
			for (int i = 0; i < space; i++)
			{
				printf(" ");
			}
			switch (cnt)
			{
			case 0: printf("\\");
				break;
			case 1:printf("|");
				break;
			case 2:printf("/");
				break;
			case 3:printf("-");
				break;
			}
			++cnt;
			if (cnt == 4)
			{
				cnt = 0;
				++i;
			}
		}
	}
	printf("\n");
	for (size_t i = 0; i < w; i++)
	{
		printf("\\-/");
		if (i != w - 1)
		{
			printf("|");
		}
	}
	return;
}

	
