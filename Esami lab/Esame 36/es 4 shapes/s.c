#define _CRT_SECURE_NO_WARNINGS
#include "shapes.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
bool line_load(FILE *f, struct line *pln)
{
	if (f == NULL)
	{
		//pln = NULL;
		return false;
	}
	uint16_t n = 0;
	int cnt = 0;
	while (1)
	{
			cnt+= fread(&pln->x1, sizeof(uint16_t), 1, f);
			cnt +=fread(&pln->y1, sizeof(uint16_t), 1, f);
			cnt += fread(&pln->x2, sizeof(uint16_t), 1, f);
			cnt += fread(&pln->y2, sizeof(uint16_t), 1, f);	
		if (cnt != 4)
		{
			
			return false;
		}
		cnt = 0;
		cnt = fread(&pln->thickness, sizeof(uint8_t), 1, f);
		if (cnt != 1)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	return true;


}



