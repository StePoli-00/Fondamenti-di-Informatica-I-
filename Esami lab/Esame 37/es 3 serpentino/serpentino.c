#include <stdlib.h>
#include <string.h>
char *serpentino_encode(const char *s)
{
	if (s == NULL)
	{
		return NULL;
	}
	int cnt = 0;
	size_t n = strlen(s);
	for (size_t i = 0; i < n; i++)
	{
		if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U'
			|| s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u')
		{
			++cnt;
		}
	}
	char *snake = malloc((1+n + (cnt * 2)) * sizeof(char));
	size_t j = 0;
	for (size_t i = 0; i < n; i++)
	{
		if (s[i] == 'A' || s[i] == 'E' || s[i] == 'O' || s[i] == 'I' || s[i] == 'U'
			|| s[i] == 'a' || s[i] == 'i' || s[i] == 'e' || s[i] == 'o' || s[i] == 'u')
		{
			snake[j] = s[i];
			++j;
			snake[j] = 's';
			++j;
			snake[j] = s[i];
			++j;
		}
		else
		{
			snake[j] = s[i];
			++j;
		}
	}
	snake[j] = '\0';
	return snake;


}
