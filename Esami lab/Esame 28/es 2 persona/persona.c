#include "persona.h"
#include <stdlib.h>
bool persona_scrivi(const struct persona *p, FILE *f)
{
	if (p == NULL || f == NULL)
	{
		return false;

	}
	unsigned int i = 0;
	unsigned int cnt = 0;
	while (1)
	{
		char s = p[i].sesso;
		if (s== 'M' || s == 'F')
		{
			++cnt;
			++i;
		}
		else {
			break;
		}
	}
	i = 0;
	struct persona *p2 = malloc(sizeof(struct persona));
	
	while (1)
	{
		if(i>=cnt)
		{
			break;
		}
		
		p2->nome = p[i].nome;
		p2->eta = p[i].eta;
		p2->sesso = p[i].sesso;
		size_t n = strlen(p[i].nome);
		fwrite(p2->nome, sizeof(char), n+1, f);
		
		fwrite(&p2->eta, sizeof(uint16_t), 1, f);
		fwrite(&p2->sesso, sizeof(char), 1, f);
		++i;




	}
	if (i ==cnt)
	{
		free(p2);
		return true;
	}
	else
	{
		free(p2);
		return false;
	}




}