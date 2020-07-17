/*#include <ctype.h>
#include <stdlib.h>
#include <string.h>
char *serpentino_encode(const char *s)
{
	int a = strlen(s);
	char *stn;
	stn = malloc((3*a) * sizeof(char));
	int i = 0;
	int j = 0;
	while (s[i] != '\0') {

		stn[j] = s[i];
		if (s[i] == 'a'||  s[i] == 'e'||  s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
		{   
			++j;
			stn[j] = 's';
			++j;
			stn[j] = s[i];
		}
		if (s[i] == 'A'||  s[i] == 'E'||  s[i] == 'I' || s[i] == 'O'||  s[i] == 'U')
		{    
			++j;
			stn[j] = 's';
			++j;
			stn[j] = s[i];

		}
		++j;
		++i;
	}
	
	return stn;
	free(stn);
}
*/