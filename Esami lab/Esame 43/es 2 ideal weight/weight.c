#include "weight.h"
double ideal_weight(int h, int age, char sex, enum formula f)
{

	if (sex != 'F' && sex != 'M')
	{
		return -1;
	}
	if (age < 0 || h<0)
	{
		return -1;
	}
	if (f != lorenz && f != berthean && f != keys)
	{
		return -1;

	}
	double peso = 0;
	double h1 = h;
	double age1 = age;
	if (f == lorenz)
	{

		if (sex == 'F')
	
	{
			
			 peso = (h1 - 100) - (h1 - 150) / 2;
		}
		else
		{
			
			peso = (h1 - 100) - (h1 - 150) / 4;
		}
	}
	if (f ==berthean)
	{
		 peso = 0.8*(h1 - 100)+ (age1/ 2);
	}
	if (f == keys)
	{

		if (sex == 'F')

		{
			
			 peso = ((h1 / 100)*(h1 / 100))*20.6;
		}
		else
		{
			 peso = ((h1 / 100)*(h1 / 100))*22.1;

		}
	}
	return peso;
}