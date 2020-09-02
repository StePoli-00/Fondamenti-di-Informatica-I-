#include "razionali.h"
#include <stdint.h>
#include <stdlib.h>
int mcd(int m,  int n)
{
	if (m == 0)
	{
		return n;
	}
	else if (n == 0)
	{
		return m;
	}
	while (m != n)
	{
		if (m < n)
		{
			int tmp = m;
			m = n;
			n = tmp;
		}
		m -= n;
	}
	return m;
}
void fr_somma(struct fraz *ris, const struct fraz *a, const struct fraz *b)
{

	if (ris == NULL || a == NULL || b == NULL)
	{
		return;
	}
	 int num_a =(int) a->num;
	 int num_b =(int) b->num;
	 int den_a = (int)a->den;
	int den_b =(int) b->den;
	
	ris->den = den_a * den_b;
	ris->num = (num_a*den_b) + (num_b*den_a);
	int ris_n = ris->num;
	int ris_d = ris->den;
	if (ris_n < 0)
	{
		ris_n *= -1;
	}
	if (ris_d < 0)
	{
		ris_d *= -1;
	}
	int emmecd = mcd(ris_n,ris_d);
	ris->num /= emmecd;
	ris->den /= emmecd;
	return;

}
