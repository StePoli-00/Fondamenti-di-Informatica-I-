#include "ip.h"
void contacapo(size_t *s, FILE *f, size_t *c) {
	size_t i = 0;
	
	size_t dim = 0;
	char *p= malloc(255* sizeof(char));
	while (fscanf(f, "%s", p)!=EOF)
	{
		dim = strlen(p);
		for (size_t i = 0; i < dim; i++)
		{
			if (p[i] == '.')
			{
				++(*c);
			}
		}
		if ((*c) != 3)
		{
			return;
		}
		++i;
		*c = 0;
	}
	free(p);
	*s = i;
	rewind(f);
	return;
}

uint32_t *leggi_indirizzi_ip(const char *filename, size_t *size) {
	
	size_t n = 0;
	FILE *f = fopen(filename, "r");
	if (f == NULL)
		return NULL;
	size_t cnt = 0;
	
	contacapo(&n, f, &cnt);
	if (cnt != 0) {
		fclose(f);
		*size = 0;
		return NULL;
	}
	char *pp = malloc(255 * sizeof(char));
	size_t dim, r = 0, d = 1, ris = 0;
	uint32_t *val = malloc(n * sizeof(uint32_t));
	for (size_t i = 0; i <n ; i++)
	{
		fscanf(f, "%s", pp);
		dim = strlen(pp);
		for (size_t j = dim; r < dim; --j)
		{
			if (pp[j-1] == '.') {
				++r;
				continue;
			}
			ris += ((pp[j - 1] - 48) * d);
			d *= 10;
			++r;
		}
		d = 1;
		r = 0;
		val[i] = ris;
		ris = 0;
	}
	/*FILE *g = fopen("new.txt", "w");
	for (size_t i = 0; i < n; i++)
	{
		fprintf(g, "%#x", val[i]);
		fprintf(g, "\n");
	}
	fclose(g);
	
	
	FILE *f1 = fopen("new.txt", "r");
	if (f1 != NULL)
	{
		unsigned int  x = 0;
		for (size_t  i = 0; i <n; i++)
		{
			fscanf(f1, "%x",&x);
			val[i] = x;

		}
	}
	fclose(f1);*/
	*size = n;
	fclose(f);
	free(pp);
	return val;
}