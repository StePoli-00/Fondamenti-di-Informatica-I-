#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
 char *parola_piu_lunga(const char *sz)
{
	 if (sz == NULL)
	 {
		 return NULL;
	 }
	 size_t n = strlen(sz);
	 size_t cnt = 0;
	 size_t max = 0;
	 char *s = malloc((n + 1) * sizeof(char));
	 char *best= malloc((n + 1) * sizeof(char));
	 size_t i = 0;
	 size_t j = 0;
	while(i<n)
	 {
		 while (sz[i] != ' ' && sz[i]!='\0' && sz[i] != '\t' && sz[i]!='\n')
		 {
			 
			 s[j] = sz[i];
			 ++i;
			 ++j;
		 }
		 ++i;
		 s[j] = 0;

		cnt=strlen(s);
		if (cnt > max)
		{
			max = cnt;
			best[max] = 0;
			strcpy(best, s);

		}
		j = 0;
		
	 }
	free(s);
	best = realloc(best, sizeof(char)*(max + 1));
	return best;
}
