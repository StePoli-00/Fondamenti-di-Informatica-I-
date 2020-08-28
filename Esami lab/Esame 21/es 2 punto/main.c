#include "punto.h"
int main(void)
{
	struct immagine a = { 25,25 };
	struct immagine b = { 12,10 };
	struct punto c={16,4};
	scala_punto(&c, &a, &b);



}