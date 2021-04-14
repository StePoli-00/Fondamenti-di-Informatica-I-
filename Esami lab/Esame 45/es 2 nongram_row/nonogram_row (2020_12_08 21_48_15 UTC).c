#include <stdint.h>
#include <stdlib.h>
#include <string.h>
uint8_t *nonogram_row(const char *s, size_t *n)
{
	if (s == NULL)
	{
		*n = 0;
		return NULL;
	}
	size_t dim = strlen(s);
uint8_t *num = malloc(sizeof(uint8_t));
uint8_t cnt = 0;
size_t j = 0;
size_t i = 0;
while(i<dim)
{
	
	while (s[i] == '*')
		{
			++cnt;
			++i;
		}
	if (cnt != 0)
	{
		num[j] = cnt;
		++j;
		num = realloc(num, sizeof(uint8_t)*(j+1));
		
	}
		while (s[i] == ' ')
		{
			++i;
		}
	cnt = 0;
		
		
}
*n = j;
return num;
	

}
