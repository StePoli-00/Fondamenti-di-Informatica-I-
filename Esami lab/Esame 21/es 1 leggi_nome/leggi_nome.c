#include "leggi_nome.h"
char *leggi_nome_sito(const char *url)
{
	if (url == NULL)
	{
		return NULL;
	}
	size_t n = strlen(url);
	size_t j = 0;
	char *new = malloc(n * sizeof(char));
	size_t i = 7;

	while (url[i] != '/')
	{
		new[j] = url[i];
		++j;
		++i;
	}
	new[j] = '\0';
	return new;





}