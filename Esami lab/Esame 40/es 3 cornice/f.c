//#include <stdint.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//void cornice(uint8_t h, uint8_t w)
//{
//	if (h == 0 || w == 0)
//	{
//		return;
//	}
//	int n = (h*h) - 1;
//	int k = 0;
//	int pattern = 0;
//	int cnt = 0;
//	int i = 0;
//	int h1 = h;
//	while (pattern != h1)
//	{
//		
//		if (cnt == 3)
//		{
//			++pattern;
//			cnt = 0;
//
//		}
//		if (k == 2 && pattern == h1)
//		{
//			break;
//		}
//		if (i == 0)
//		{
//
//			
//			for (size_t i = 0; i < (size_t)w - 1; i++)
//			{
//				printf("/-\\|");
//			}
//			printf("-");
//			printf("\\");
//			printf("\n");
//			++i;
//			++k;
//		}
//		else
//		{
//
//			if (k == 0)
//			{
//				printf("/");
//			}
//			if (k == 1)
//			{
//				printf("|");
//			}
//			if (k == 2)
//			{
//				printf("\\");
//			}
//			if (k == 3)
//			{
//				printf("-");
//			}
//			size_t sp = (w)+(w) + 1;
//			for (size_t i = 0; i < sp; i++)
//			{
//				printf(" ");
//
//			}
//
//			if (k == 0)
//			{
//				printf("\\");
//			}
//			if (k == 1)
//			{
//				printf("|");
//			}
//			if (k == 2)
//			{
//				printf("/");
//			}
//			if (k == 3)
//			{
//				printf("-");
//			}
//
//
//			printf("\n");
//			++cnt;
//			++i;
//			++k;
//			if (k == 4)
//			{
//				k = 0;
//			}
//		}
//
//	}
//	
//for (size_t i = 0; i < (size_t)w-1; i++)
//	{
//		printf("\\-/|");
//	}
//	printf("\\-/");
//	return;
//}
//	