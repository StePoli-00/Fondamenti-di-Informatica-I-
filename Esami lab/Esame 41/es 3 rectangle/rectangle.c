#include "rectangle.h"
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
bool rect_load(FILE *f, struct rect *r)
{
	if (f == NULL || r == NULL)
	{
		return false;

	}

	char c = fgetc(f);
	int i = 0;
	
		fread(r, sizeof(int32_t), 4, f);

		++i;
		c = fgetc(f);
	
}

