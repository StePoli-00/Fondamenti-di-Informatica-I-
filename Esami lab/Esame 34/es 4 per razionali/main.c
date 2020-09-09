#include "rational.h"
int main(void)
{
	struct rational m;
	m.num = 5;
	m.den = 7;
	struct rational n;
	n.num = -10;
	n.den = 14;
	struct rational sum;
	rational_sum(&sum, &m, &n);



}
