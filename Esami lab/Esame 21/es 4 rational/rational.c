#include "rational.h"
unsigned int multiple(unsigned int m, unsigned int  n)
{
	if (m == 0 || n == 0)
	{
		return 0;
	}
	while (m != n)
	{
		if (m < n)
		{
			unsigned int t = m;
			m = n;
			n = t;

		}
		m -= n;
		

	}
	return m;
}


void rational_mul(struct rational *product, const struct rational *multiplicand,const struct rational *multiplier)
{
	if (multiplicand->num == 0 && multiplicand->den == 1 && multiplier->num == 0 && multiplier->den == 1)
	{
		product->num = 0;
		product->den = 1;
		return;
	}
	if (multiplicand->num == 0 && multiplicand->den == 1 && multiplier->num != 0 && multiplier->den != 1)
	{
		product->num = 0;
		product->den = 1;
		return;
	}
	if (multiplicand->num != 0 && multiplicand->den != 1 && multiplier->num == 0 && multiplier->den == 1)
	{
		product->num = 0;
		product->den = 1;
		return;
	}
	struct rational *n1 = malloc(sizeof(struct rational));
	struct rational *n2 = malloc(sizeof(struct rational));
	n1->num =(signed int)multiplicand->num;
	n1->den = (signed int)multiplicand->den;
	n2->num = (signed int)multiplier->num;
	n2->den = (signed int)multiplier->den;
	product->num =n1->num*n2->num;
	product->den =n1->den*n2->den;
	signed int m =  product->num;
    signed int  n = product->den;
	signed int mcd=multiple(m, n);
	product->num=product->num/ mcd;
	product->den= product->den/mcd;
	free(n1);
	free(n2);
	return;



}