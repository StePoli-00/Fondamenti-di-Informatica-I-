#include <ctype.h>
#include <stdlib.h>
#include <string.h>
char *codifica_morse(const char *testo)
{
	if (testo == NULL)
	{
		return NULL;
	}

	char *s = malloc(1000 * sizeof(char));
	int i = 0;
	int j = 0;
	
	while (testo[i] != '\0')
	{
		if (testo[i] == 'A')
		{
			s[j] = '.';
			++j;
			s[j] = '_';
			++j;
			s[j] = ' ';
			++j;

		}

		if (testo[i] == 'B')
		{
			s[j] = '_';
			++j;
			s[j] = '.';
			++j;
			s[j] = '.';
			++j;
			s[j] = '.';
			++j;
			s[j] = ' ';
			++j;

		}
		if (testo[i] == 'C')
		{


			s[j] = '_';
			++j;
			s[j] = '.';
			++j;
			s[j] = '_';
			++j;
			s[j] = '.';
			++j;
			s[j] = ' ';
			++j;
		}
		if (testo[i] == 'D')
		{
			s[j] = '_';
			++j;
			s[j] = '.';
			++j;
			s[j] = '.';
			++j;
			s[j] = ' ';
			++j;

		}
	if (testo[i] == 'E')
	{

		s[j] = '.';
		++j;
		s[j] = ' ';
		++j;


	}
	if (testo[i] == 'F')
	{
		s[j] = '.';
		++j;
		s[j] = '.';
		++j;
		s[j] = '_';
		++j;
		s[j] = '.';
		++j;
		s[j] = ' ';
		++j;

	}
	if (testo[i] == 'G')
	{
		s[j] = '_';
		++j;
		s[j] = '_';
		++j;
		s[j] = '.';
		++j;
		s[j] = ' ';
		++j;



	}
	if (testo[i] == 'H')
	{

		s[j] = '.';
		++j;
		s[j] = '.';
		++j;
		s[j] = '.';
		++j;
		s[j] = '.';
		++j;
		s[j] = ' ';
		++j;
	}
	if (testo[i] == 'I')
	{
		s[j] = '.';
		++j;
		s[j] = '.';
		++j;
		s[j] = ' ';
		++j;
	}
	if (testo[i] == 'J')
	{
		s[j] = '.';
		++j;
		s[j] = '_';
		++j;
		s[j] = '_';
		++j;
		s[j] = '_';
		++j;
		s[j] = ' ';
		++j;
	}
	if (testo[i] == 'K')
	{
		s[j] = '_';
		++j;
		s[j] = '.';
		++j;
		s[j] = '_';
		++j;
		s[j] = ' ';
		++j;
	}
	if (testo[i] == 'L')
	{
		
		s[j] = '.';
		++j;
		s[j] = '_';
		++j;
		s[j] = '.';
		++j;
		s[j] = '.';
		++j;
		s[j] = ' ';
		++j;
	}
	if (testo[i] == 'M')
	{
		s[j] = '_';
		++j;
		s[j] = '_';
		++j;
		s[j] = ' ';
		++j;
	}
	if (testo[i] == 'N')
	{

		s[j] = '_';
		++j;
		s[j] = '.';
		++j;
		s[j] = ' ';
		++j;


	}
	if (testo[i] == 'O')
	{

		s[j] = '_';
		++j;
		s[j] = '_';
		++j;
		s[j] = '_';
		++j;
		s[j] = ' ';
		++j;
	}
	if (testo[i] == 'P')
	{
		s[j] = '.';
		++j;
		s[j] = '_';
		++j;
		s[j] = '_';
		++j;
		s[j] = '.';
		++j;
		s[j] = ' ';
		++j;


	}
	if (testo[i] == 'Q')
	{
		s[j] = '_';
		++j;
		s[j] = '_';
		++j;
		s[j] = '.';
		++j;
		s[j] = '_';
		++j;
		s[j] = ' ';
		++j;


	}
	if (testo[i] == 'R')
	{
		s[j] = '.';
		++j;
		s[j] = '_';
		++j;
		s[j] = '.';
		++j;
		s[j] = ' ';
		++j;


	}
	if (testo[i] == 'S')
	{

		s[j] = '.';
		++j;
		s[j] = '.';
		++j;
		s[j] = '.';
		++j;
		s[j] = ' ';
		++j;
	}
	if (testo[i] == 'T')
	{
		s[j] = '_';
		++j;
		s[j] = ' ';
		++j;
	}
	if (testo[i] == 'U')
	{
		s[j] = '.';
		++j;
		s[j] = '.';
		++j;
		s[j] = '_';
		++j;
		s[j] = ' ';
		++j;
	}
	if (testo[i] == 'V')
	{
		s[j] = '.';
		++j;
		s[j] = '.';
		++j;
		s[j] = '.';
		++j;
		s[j] = '_';
		++j;
		s[j] = ' ';
		++j;
	}
	if (testo[i] == 'W')
	{
		s[j] = '.';
		++j;
		s[j] = '_';
		++j;
		s[j] = '_';
		++j;
		s[j] = ' ';
		++j;
	}
	if (testo[i] == 'Y')
	{
		s[j] = '_';
		++j;
		s[j] = '.';
		++j;
		s[j] = '_';
		++j;
		s[j] = '_';
		++j;
		s[j] = ' ';
		++j;
	}
	if (testo[i] == 'Z')
	{
		s[j] = '_';
		++j;
		s[j] = '_';
		++j;
		s[j] = '.';
		++j;
		s[j] = '.';
		++j;
		s[j] = ' ';
		++j;
	}
	if (testo[i] == 'X')
	{
		s[j] = '_';
		++j;
		s[j] = '.';
		++j;
		s[j] = '.';
		++j;
		s[j] = '_';
		++j;
		s[j] = ' ';
		++j;
	}

		
	if (testo[i] == ' ')
	{
			s[j] = '/';
			++j;
			s[j] = ' ';
			++j;
	}

		++i;

	}

	s[j-1] = '\0';
	return s;


}





