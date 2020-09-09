#define _CRT_SECURE_NO_WARNINGS
#include "tirocini.h"
int main(void)
{
	struct tirocinio *c =malloc(sizeof(struct tirocinio));
	FILE *f = fopen("input2.txt", "r");
	if (f != NULL)
	{
		for (size_t i = 0; i < 58; i++)
		{
			bool a = tirocinio_load(f, c);
			a = 0;
		}
		
		


	}

}