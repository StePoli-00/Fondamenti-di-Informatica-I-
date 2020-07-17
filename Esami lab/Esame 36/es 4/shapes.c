#define _CRT_SECURE_NO_WARNINGS
#include "shapes.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
bool line_load(FILE *f, struct line *pln)
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	
	
	int cnt = 0;
	
		a = fread(&pln->x1, sizeof(int16_t), 1, f);
		b = fread(&pln->y1, sizeof(int16_t), 1, f);
		c = fread(&pln->x2, sizeof(int16_t), 1, f);
		d = fread(&pln->y2, sizeof(int16_t), 1, f);
		e = fread(&pln->thickness, sizeof(uint8_t), 1, f);
		
		++cnt;

	if (a + b + c + d + e == 5)
	{
		return true;
	}
	else
	{
		return false;
	}


	


	}



