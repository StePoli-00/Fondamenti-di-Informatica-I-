#include "carcassonne.h"
bool controlla_casella(const struct casella *c, const struct casella  *tabellone,
	size_t dim)
{
	if (c == NULL || tabellone == NULL || dim == 0)
	{
		return 0;
	}
	casella *tmp_tab = malloc(dim*sizeof(struct casella));
	for (size_t i = 0; i < dim; i++)
	{
		tmp_tab[i] = tabellone[i];

	}
	for (size_t i = 0; i < dim; i++)
	{

		if (tmp_tab[i].x == c->x && tmp_tab[i].y == c->y)
		{
			free(tmp_tab);
			return 0;
		}
	}
	bool is = false;
	for (size_t i = 0; i < dim; i++)
	{
		if ((tmp_tab[i].x == c->x && (tmp_tab[i].y- c->y)!=0) )
		{
			is = true;
		}
	}
	if (is == true)
	{
		is == false;
		for (size_t i = 0; i < dim; i++)
		{
			for (size_t j = 0; j < 4; j++)
			{
				if (tmp_tab[i].lati[i] ==c->lati[j] )
				{
					is == true;
				}
			}
			
			if (is == false)
			{
				free(tmp_tab);
				return false;

			}
			is == false;

		}
		return true;
	}
	else
	{
		free(tmp_tab);
		return false;
	}





}