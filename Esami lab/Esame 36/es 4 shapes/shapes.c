//#define _CRT_SECURE_NO_WARNINGS
//#include "shapes.h"
//#include <stdbool.h>
//#include <stdint.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>
//bool line_load(FILE *f, struct line *pln)
//{
//	if (f == NULL)
//	{
//		pln = NULL;
//		return false;
//	}
//	uint16_t n = 0;
//	size_t dim = 0;
//	int i = 0;
//	pln = malloc(sizeof(struct line));
//	while (fread(&n, sizeof(uint16_t), 1, f))
//	{
//			fread(&pln[i].x1, sizeof(uint16_t), 1, f);
//			fread(&pln[i].x2, sizeof(uint16_t), 1, f);
//			fread(&pln[i].y1, sizeof(uint16_t), 1, f);
//			fread(&pln[i].y2, sizeof(uint16_t), 1, f);
//			fread(&pln[i].thickness, sizeof(uint8_t), 1, f);
//			++i;
//			pln = realloc(pln, sizeof(i + 1));
//	}
//	return true;
//}
//
//
//
