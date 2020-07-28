#include "weight.h"
int main(void)
{
	int h = 160;
	int age = 29;
	char  s= 'F';
	enum formula f= lorenz;
	double a=ideal_weight(h, age, s, lorenz);
	double b= ideal_weight(h, age, s, keys);
	double c = ideal_weight(h, age, s, berthean);





}