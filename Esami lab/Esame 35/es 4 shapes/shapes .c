#include "shapes.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
bool rect_load(FILE *f, struct rect *r)
{
	if (f == NULL)
	{
		return false;
	}
	int cnt = 0;
	while (1)
	{
		cnt = fread(&r->x, sizeof(int16_t), 1, f);
		cnt=fread(&r->y, sizeof(int16_t), 1, f);
		cnt=fread(&r->width, sizeof(uint16_t), 1, f);
		cnt=fread(&r->height, sizeof(uint16_t), 1, f);
		cnt=fread(&r->symbol, sizeof(char), 1, f);
		if (cnt != 1)
		{
			return false;
		}
	}
			
		
return false;

	
	


		
	
	
}
