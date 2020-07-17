#include "weight.h"
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>

double ideal_weight(int h, int age, char sex, enum formula f )
{
	if (h < 0 || age < 0)
	{
		return -1;
	}
	if (sex != 77 && sex != 70)
	{
		return -1;
	}
	double peso = 0;
	if (sex == 77 && (f == lorenz))
	{
		double div = 4;
		double num = (h - 150) / div;
		peso = (h - 100) - num;
		return peso;

	}
	
	 if(sex == 70 && (f == lorenz))
	{
		double h1 = h;
		double num = (h1 - 150) / 2;
		peso = h - 100 - num;
		return peso;
	}
	if(f == berthean)
	{
		double age1 = age;
		peso = 0.8*(h - 100) + (age1 / 2);
		return peso;

	}
	if (  sex == 77   && f == keys)
	{
		double h1 = h;
		double div = h1 / 100;
		peso = (div*div)*22.1;
		return peso;
	}
	 if (sex == 70 && f == keys)
	{
		double h1 = h;
		double div = h1 / 100;
		peso = (div*div)*20.6;
		return peso;
	}

	
	 return 0;

}
