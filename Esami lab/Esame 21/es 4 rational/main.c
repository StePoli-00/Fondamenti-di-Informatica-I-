#include "rational.h"
int main(void)
{
	struct rational *prod = malloc(sizeof (struct rational));
	struct rational n1 = { 5,7 };
	struct rational n2 = {-10,14};
	rational_mul(prod, &n1, &n2);



}