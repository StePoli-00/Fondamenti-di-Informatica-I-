
#define _CRT_SECURE_NO_WARNINGS
#include "product.h"

int main(void)
{
	struct product prod[] ={{"289347","Pizza Margherita",6},{"67832","Chicken Nuggets",7}};
	size_t n = 2;
	FILE *f = fopen("new.txt", "w");
	write_products(f, prod, 2);
	fclose(f);



}