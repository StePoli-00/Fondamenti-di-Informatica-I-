#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdint.h>
#include <stdio.h>
int accodaTuttiFile(const char *fileConNomi, const char *fileOutput)
{
	FILE *f = fopen(fileConNomi, "r");
	FILE *g = fopen(fileOutput, "wb");
	if(f==NULL)
	{
		return 0;
	}
	char s[255];
	size_t cnt = 0;
	while(fscanf(f, "%[^\n]", s)!=EOF)
	{
		
		fgetc(f);
		++cnt;

	}
	rewind(f);
	
	size_t concatenati=0;
	size_t dim = 0;
	size_t i = 0;
	while(i!=cnt)
	{
		fscanf(f, "%[^\n]", s);
		FILE *f1 = fopen(s, "r");
		fgetc(f);
		if (f1 != NULL)
		{
			fscanf(f1, "%[^\n]", s);
			dim = strlen(s);
			fwrite(s, sizeof(char), dim, g);
			++concatenati;
			fclose(f1);
		}
		
		++i;
		
	}
	
	fclose(f);
	fclose(g);

	return concatenati;

}