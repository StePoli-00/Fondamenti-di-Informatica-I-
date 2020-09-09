#include <stdlib.h>
#include <stdio.h>
#include <string.h>
char *decodifica_morse(const char *codice)
{

	if (codice == NULL)
	{
		return NULL;
	}
	size_t i = 0;
	size_t n = strlen(codice);
	char *lettera = malloc((n + 1) * sizeof(char));
	lettera[n] = 0;
	char *p = malloc(n + 1 * sizeof(char));
	// fare malloc con totale letture di scanf
	char A[] = "._";
	char B[] = "_...";
	char C[] = "_._.";
	char D[] = "_..";
	char E[] = ".";
	char F[] = ".._.";
	char G[] = "__.";
	char H[] = "....";
	char I[] = "..";
	char J[] = ".___";
	char K[] = "_._";
	char L[] = "._..";
	char M[] = "__";
	char N[] = "_.";
	char O[] = "___";
	char P[] = ".__.";
	char Q[] = "__._";
	char R[] = "._.";
	char S[] = "...";
	char T[] = "_";
	char U[] = ".._";
	char V[] = "..._";
	char W[] = ".__";
	char X[] = "_.._";
	char Y[] = "_.__";
	char Z[] = "__..";
	char sp[] = "/";
	size_t k = 0;
	while (i != n)

	{
		size_t j = 0;
		while (codice[i] != ' ' && codice[i] != '\0')
		{
			lettera[j] = codice[i];
			++j;
			++i;
		}
		lettera[j] = 0;
		if (strcmp(A, lettera) == 0)
		{
			p[k] = 'A';
			++k;
		}
		else if (strcmp(B, lettera) == 0)
		{
			p[k] = 'B';
			++k;
		}

		else if (strcmp(C, lettera) == 0)
		{
			p[k] = 'C';
			++k;
		}

		else if (strcmp(D, lettera) == 0)
		{
			p[k] = 'D';
			++k;
		}

		else if (strcmp(E, lettera) == 0)
		{	p[k] = 'E';
		++k;
		}
		else if (strcmp(F, lettera) == 0)
		{
			p[k] = 'F';
			++k;
		}

		else if (strcmp(G, lettera) == 0)
		{
			p[k] = 'G';
			++k;
		}
		else if (strcmp(H, lettera) == 0)
		{
			p[k] = 'H';
			++k;
		}

		else if (strcmp(I, lettera) == 0)
		{
			p[k] = 'I';
			++k;
		}

		else if (strcmp(J, lettera) == 0)
		{
			p[k] = 'J';
			++k;
		}

		else if (strcmp(K, lettera) == 0)
		{
			p[k] = 'K';
			++k;
		}
		else if (strcmp(L, lettera) == 0)
		{
			p[k] = 'L';
			++k;
		}
		else if (strcmp(M, lettera) == 0)
		{
			p[k] = 'M';
			++k;
		}
		else if (strcmp(N, lettera) == 0)
		{
			p[k] = 'N';
			++k;
		}

		else if (strcmp(O, lettera) == 0)
		{
			p[k] = 'O';
			++k;

		}
		else if (strcmp(P, lettera) == 0)
		{
			p[k] = 'P';
			++k;
		}

		else if (strcmp(Q, lettera) == 0)
		{
			p[k] = 'Q';
			++k;
		}
		else if (strcmp(R, lettera) == 0)
		{
			p[k] = 'R';
			++k;

		}
		else if (strcmp(S, lettera) == 0)
		{
			p[k] = 'S';
			++k;
		}
		else if (strcmp(T, lettera) == 0)
		{
			p[k] = 'T';
			++k;
		}
		else if (strcmp(U, lettera) == 0)
		{
			p[k] = 'U';
			++k;
		}
		else if (strcmp(V, lettera) == 0)
		{
			p[k] = 'V';
			++k;
		}
		else if (strcmp(W, lettera) == 0)
		{
			p[k] = 'W';
			++k;
		}

		else if (strcmp(X, lettera) == 0)
		{
			p[k] = 'X';
			++k;
		}
		else if (strcmp(Y, lettera) == 0)
		{
			p[k] = 'Y';
			++k;
		}

		else if (strcmp(Z, lettera) == 0)
		{
			p[k] = 'Z';
			++k;
		}

		else if (strcmp(sp, lettera) == 0)
		{
			p[k] = ' ';
			++k;
		}
		//lettera=calloc(j, sizeof(char)); non farla perchè genera memory leak
		if (i != n)
		{
			++i;
		}
		else
		{
			break;
		}

	}
	free(lettera);
	p = realloc(p, sizeof(char)*(k + 1));
	p[k] = 0;
	return p;
}
