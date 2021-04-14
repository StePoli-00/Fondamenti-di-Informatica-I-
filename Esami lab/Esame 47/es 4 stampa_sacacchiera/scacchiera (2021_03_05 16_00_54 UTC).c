#include "scacchiera.h"
void stampa_scacchiera(const struct scacchiera *sc)
{
	if (sc==NULL)
	{
		return;
	}

	size_t j = 0;
	for (size_t i = 0; i < 8; i++)
	{
		printf("+---");
	}
	printf("+\n");
	for (size_t i = 0; i < 8; i++)
	{
		printf("|%s",sc->caselle[j]);
		++j;
	}
	return;
}