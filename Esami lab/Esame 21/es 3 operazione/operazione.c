#include "operazione.h"
double parse_operazione(const char *s)
{
	if (s == NULL)
	{
		return 0;
	}
	int i = 0;
	int j = 0;

	char *n1 = malloc(50 * sizeof(char));
	char op = 0;
	char *n2 = malloc(50 * sizeof(char));
	
		while (s[i]!=' ' )
		{
			n1[j] = s[i];
			++j;
			++i;
		}
		n1[j] = '\0';
		j = 0;
		++i;
		op = s[i];
		++i;
		while (s[i] == ' ')
		{
			++i;
		}
		while (s[i] !='\0')
		{
			n2[j] = s[i];
			++j;
			++i;
		}
		n2[j] = '\0';
		++i;
	double num1 = atof(n1);
	double num2 = atof(n2);
	double num = 0;
	if (op == '+')
	{
		num = num1 + num2;
	}
	else if (op == '-')
	{
		num = num1 - num2;
	}
	else if (op == '*')
	{
		num = num1 * num2;
	}
	else if (op == '/')
	{
		num = num1 / num2;
	}
	free(n1);
	free(n2);
	return num;
}