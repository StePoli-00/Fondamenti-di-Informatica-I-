#define _CRT_SECURE_NO_WARNINGS
#include "config.h"
 bool controllo(FILE *f, char c)
{
	 while (c != EOF)
	 {
		 if (c == '#')
		 {
			 while (c != '\n')
			 {
				 c = fgetc(f);
			 }
			 c = fgetc(f);
		 }



	 }
}
struct keyval *read_config(const char *filename, size_t *n)
{
	if (filename == NULL)
	{
		*n = 0;
		return NULL;
	}
	FILE *f = fopen(filename, "r");
	if (f == NULL)
	{
		*n = 0;
		return NULL;
	}	
	char c = fgetc(f);
	size_t cnt = 0;
	while (c != EOF)
	{
		if (c == '#')
		{
			while (c != '\n')
			{
				c = fgetc(f);
			}
			c = fgetc(f);
		}
		else
		{
			while (c != '\n')
			{
				c = fgetc(f);
			}
			++cnt;
			c = fgetc(f);

		}
	}
	rewind(f);
	*n = cnt;
	struct keyval *val = malloc(cnt*sizeof(struct keyval* ));
	c = fgetc(f);
	char *k = malloc(100 * sizeof(char));
	
	char *v = malloc(100 * sizeof(char));
	size_t i = 0;
	cnt = 0;
	size_t j = 0;
	while (c!=EOF)
	{
		if (c == '#')
		{
			while (c != '\n')
			{
				c = fgetc(f);
			}
			c = fgetc(f);
		}
		else
		{
		
			while (c != '=' && c!=' ')
			{
				if(c!=' ' && c!='\t')
				{ 
					k[j] = c;
					++cnt;
					++j;
				}
				c = fgetc(f);
			}
			while (c == ' ')
			{
				c = fgetc(f);
			}
			k[j] = '\0';
			memcpy(val[i].k, k, cnt+1);
			c = fgetc(f);
			j = 0;
			cnt = 0;
			while (c == ' ')
			{
				c = fgetc(f);
			}
			
			while ( c!='\n')
			{
				while (c == ' ')
				{
					c = fgetc(f);
				}
				if (c != '\t')
				{
					v[j] = c;
					++cnt;
					++j;
				}
				if (c != ' ')
				{
				c = fgetc(f);
				}
				
			}
			v[j] = '\0';
			memcpy(val[i].v, v, cnt + 1);
			c = fgetc(f);
			j = 0;
			cnt = 0;
			++i;
			while (c ==' ')
			{
				c = fgetc(f);
			}

		}
	}
	fclose(f);
	return val;



}