#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>	
bool is_date(const char *s)
{
	if (s == NULL)
	{
		return false;
	}
	size_t n = strlen(s);
	if (n != 10)
	{
		return false;
	}
	
	if (isdigit(s[0]) && isdigit(s[1]))
	{
		if (s[2] == '/'&& s[5] == '/')
		{
			if (isdigit(s[3]) && isdigit(s[4]))
			{
				if (isdigit(s[6]) && isdigit(s[7]) && isdigit(s[8]) && isdigit(s[9]))
				{
					return true;
				}
			}
		}
		
	}
	return false;


}
