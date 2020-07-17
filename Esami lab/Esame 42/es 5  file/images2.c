//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctype.h>
//#include "images.h"
//
//struct image *read_images(const char *filename, size_t *n) 
//{
//	FILE *f = fopen(filename, "r");
//	if (f == NULL)
//	{
//		return NULL;
//	}
//	
//	struct image *imm =malloc(sizeof(struct image));
//	char c = 0;
//	size_t i2= 0;
//	int i = 0;
//	int j = 0;
//	while (c!=EOF)
//	{
//		char *s = malloc(100 * sizeof(char));
//		while (c != ':')
//		{
//			
//			fscanf(f, "%c", &s[i]);
//			c = fgetc(f);
//			fseek(f, -1, SEEK_CUR);
//			++i;
//			if (c == EOF)
//			{
//				break;
//			}
//
//			
//		}
//		s[i] = '\0';
//		i2 = i;
//		strcpy(imm[j].name, s);
//
//		s = calloc(i2,sizeof(char));
//		i = 0;
//		fseek(f, +1, SEEK_CUR);
//	
//		while ((c=fgetc(f)) != ':'&& c!=EOF)
//		{
//			fseek(f, -1, SEEK_CUR);
//			fscanf(f, "%c", &s[i]);
//			if (c == EOF)
//			{
//				break;
//			}
//			
//			++i;
//		}
//	
//		s[i] = '\0';
//		imm[j].height = atoi(s);
//		s = calloc(i2, sizeof(char));
//		i = 0;
//		
//		while ((c = fgetc(f)) != ':'&& c!='\n'&& c != EOF)
//		{
//			fseek(f, -1, SEEK_CUR);
//			fscanf(f, "%c", &s[i]);
//			if (c == EOF)
//			{
//				break;
//			}
//
//			++i;
//		}
//		s[i] = '\0';
//		imm[j].width = atoi(s);
//		s = calloc(i2, sizeof(char));
//		i = 0;
//		++j;
//		if (c == EOF)
//		{
//			break;
//		}
//		free(s);
//		
//	}
//fclose(f);
//	return imm;
//
//
//
//}