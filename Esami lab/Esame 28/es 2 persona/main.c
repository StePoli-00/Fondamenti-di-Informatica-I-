#define _CRT_SECURE_NO_WARNINGS
#include "persona.h"

int main(void)
{
	char *a = "alberto";
	char *b = "carla";
	char *c = "marco";
	struct persona p[] = { { a,12,'M' },{b,22,'F'}, {c,34,'M'} };
	FILE *f = fopen("scrivi.bin", "w");
	if (f != NULL)
	{
		persona_scrivi(p, f);


	}


}