#include "risiko.h"
void ordina(char *v ,char dim)
{
	size_t n = dim;
	for (size_t i = 0; i < n; i++)
	{
		for (size_t k=i+1;  k< n; k++)
		{
			if (v[i] <v[k])
			{
				char tmp = v[i];
				v[i] = v[k];
				v[k] = tmp;
			}
		}

	}
	return;
}
void confronta_lanci_ord(const struct lancio *attacco, const struct lancio *difesa, char *perse_attacco, char *perse_difesa)
{
	if (attacco == NULL || difesa == NULL || perse_attacco==NULL || perse_difesa==NULL)
	{
		return;
	}
	char *a = malloc(attacco->n_dadi * sizeof(char));
	char *d = malloc(difesa->n_dadi * sizeof(char));
	
	for (char i = 0; i < attacco->n_dadi; i++)
	{
		a[i] = attacco->valori[i];
	}
	ordina(a, attacco->n_dadi);
	for (char i = 0; i < difesa->n_dadi; i++)
	{
		d[i] = difesa->valori[i];
	}
	ordina(d, difesa->n_dadi);
	char pa = 0;
	char pd = 0;
	size_t n = 0;
	if (attacco->n_dadi > difesa->n_dadi)
	{
		n = difesa->n_dadi;
		
	}
	else if (attacco->n_dadi <= difesa->n_dadi)
	{
		n = attacco->n_dadi;
		
	}
	for (size_t i = 0; i < n; i++)
	{
		
		if (a[i] > d[i])
		{
			++pd;
		}
		else if (d[i] > a[i])
		{
			++pa;
		}
		else if(d[i]==a[i])
		{
			++pa;
		}
	}
	free(a);
	free(d);
	*perse_attacco = pa;
	*perse_difesa =	 pd;
	return;



}