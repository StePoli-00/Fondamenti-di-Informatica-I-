//#define _CRT_SECURE_NO_WARNINGS
//#include "persona.h"
//#include <string.h>
//#include <stdio.h>
//#include <stdint.h>
//#include <ctype.h>
//#include <stdlib.h>
//void controlla(FILE *f, size_t *size, int *dim)
//{
//	char c = 0;
//	fgetc(f);
//	char *str = malloc(50 * sizeof(char));
//	while (c != EOF)
//	{
//		if (!fscanf(f, "%[^\n]", str))
//		{
//			break;
//		}
//		c = fgetc(f);
//		++*dim;
//
//
//	}
//	free(str);
//	return;
//}
//struct persona *leggi_persone(const char *filename, size_t *size)
//{
//	if (filename == NULL || size == NULL)
//	{
//		*size = 0;
//		return NULL;
//	}
//	FILE *f = fopen(filename, "r");
//	if (f == NULL)
//	{
//		*size = 0;
//		return NULL;
//	}
//	int n = 0;
//	fscanf(f, "%d", &n);
//	if (n < 0)
//	{
//		fclose(f);
//		*size = 0;
//		return NULL;
//	}
//	
//	int dim = 0;
//	controlla(f, size, &dim);
//	if (dim != n)
//	{
//		*size = 0;	
//		fclose(f);
//		return NULL;
//	}
//	rewind(f);
//	fscanf(f, "%d", &n);
//	fgetc(f);
//
//	
//	char c = 0;	
//	struct persona *p = malloc(n * sizeof(struct persona));
//	int i = 0;
//
//
//	while (i != n)
//	{
//
//		while (!isalnum(c))
//		{
//			fscanf(f, "%c", &c);
//		}
//		fseek(f, -1, SEEK_CUR);
//		
//		fscanf(f, "%d", &p[i].anni);
//		fscanf(f, "%c", &c);
//		while (!isalnum(c))
//		{
//			fscanf(f, "%c", &c);
//		}
//		int j = 0;
//		fseek(f, -1, SEEK_CUR);
//		while (fscanf(f, "%c", &c) != EOF)
//		{
//			if (c == '\n')
//			{
//				break;
//			}
//			p[i].nome[j] = c;
//			++j;
//		}
//		p[i].nome[j] = 0;
//
//		fscanf(f, "%c", &c);
//		++i;
//	}
//	*size = i;
//	fclose(f);
//	return p;
//
//}