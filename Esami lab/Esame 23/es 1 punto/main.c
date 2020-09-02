#include "punto.h"
#include <stdint.h>
#include <stdlib.h>

int main(void)
{

	struct punto_cart a = { 1,2 };
	struct punto_pol b = { 3,4 };
	struct punto_pol pol;
	pol= cartesiano2polare(&a);
	struct punto_cart cart;
	cart=polare2cartesiano(&b);



}