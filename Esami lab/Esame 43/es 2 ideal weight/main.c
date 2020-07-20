#include "weight.h"
int main(void)
{
	int h = 172;
	int age = 19;
	char  s= 'M';
	enum formula f= lorenz;
	double a=ideal_weight(h, age, s, lorenz);
	double b= ideal_weight(h, age, s, keys);
	double c = ideal_weight(h, age, s, berthean);





}