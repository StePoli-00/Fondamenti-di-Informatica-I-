#include "tirocini.h"
int main(void)
{
	struct tirocinio *c = malloc(sizeof(struct tirocinio));
	FILE *f = fopen("input1.txt", "r");
	if (f != NULL)
	{
		tirocinio_load(f, c);

	}

}