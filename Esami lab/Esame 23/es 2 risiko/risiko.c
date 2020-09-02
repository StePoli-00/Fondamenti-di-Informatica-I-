#include "risiko.h"
#include <stdint.h>
#include <stdlib.h>
void ordina_dec(int *v,size_t n)
{
	for (size_t i = 0; i <n; i++)
	{
		for (size_t j = 0; j < n; j++)
		{
			if (v[i] > v[j])
			{
				int tmp = v[i];
				v[i] = v[j];
				v[j] = tmp;
			}
		}
	}
	return;
}
void confronta_lanci(const struct lancio *attacco, const struct lancio *difesa, char *perse_attacco, char *perse_difesa)
{
	if (attacco == NULL || difesa == NULL|| perse_attacco==NULL || perse_difesa==NULL)
	{
		return;
	}
	char  pa = 0;
	char pd = 0;
	int *a = malloc(attacco->n_dadi * sizeof(int));
	size_t n = attacco->n_dadi;
	for (size_t i = 0; i < n; i++)
	{
		a[i] = attacco->valori[i];
	}

	ordina_dec(a, attacco->n_dadi);

	int *d= malloc(difesa->n_dadi * sizeof(int));
	n = difesa->n_dadi;
	for (size_t i = 0; i < n; i++)
	{
		d[i] = difesa->valori[i];
	}
ordina_dec(d, difesa->n_dadi);
	if (attacco->n_dadi > difesa->n_dadi)
	{
		n = difesa->n_dadi;
	}
	else if(attacco->n_dadi <= difesa->n_dadi)
	{
		n = attacco->n_dadi;
	}
	for (size_t i = 0; i < n; i++)
	{
		if (a[i] > d[i])
		{
			++pd;
		}
		else if(a[i] <= d[i])
		{
			++pa;
		}
	}
	*perse_attacco = pa;
	*perse_difesa = pd;
	free(a);
	free(d);
	return;
}