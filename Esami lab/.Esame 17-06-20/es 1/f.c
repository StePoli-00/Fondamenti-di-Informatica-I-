#include "cerchio.h"
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
bool nel_cerchio(const struct punto *p, const struct cerchio *c)

{

	if (p == NULL || c == NULL)
	{
		return false;


	}
	const struct punto *p1 = p;

	double a = p1->x - p1->y;

	if (a == 0)
	{
		return false;
	}

		if (a <= c->r)
	{
		return true;
	}
	return false;


}