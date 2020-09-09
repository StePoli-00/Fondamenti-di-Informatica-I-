#include "rational.h"
int mcd(int m, int n)
{
	if (m == 0)
	{
		return n;
	}
	if (n == 0)
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
void rational_sum(struct rational *sum, const struct rational *first, const struct rational *second)
{
	if (sum == NULL || first == NULL || second == NULL)
	{
		return;
	}
	if (first->num == 0 && first->den == 1)
	{
		sum->num = second->num;
		sum->den = second->den;
		return;
	}
	if (second->num == 0 && second->den == 1)
	{
		sum->num = first->num;
		sum->den = first->den;
		return;
	}
	int n1 = first->num;
	int d1 = (int)first->den;
	int n2 = second->num;
	int d2 = (int)second->den;
	int dris = d1 * d2;
	int nris = (n1*d2) + (d1*n2);
	if (nris == 0 && dris == 1)
	{
		sum->num = nris;
		sum->den = dris;
		return;
	}
	int m = nris;
	int n = dris;
	if (m < 0)
	{
		m *= -1;
	}
	if (n < 0)
	{
		n*= 1;
	}
	
	int mm =mcd(m, n);
	nris /= mm;
	dris /= mm;
	sum->num = nris;
	sum->den =(unsigned int)dris;
	return;




}

