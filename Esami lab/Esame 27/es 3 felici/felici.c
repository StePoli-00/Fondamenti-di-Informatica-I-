#include <stdbool.h>
int felice(unsigned int num)
{
	if (num == 0)
	{
		return 0;
	}
	if (num == 1)
	{
		return 1;
	}
	unsigned int  val = num;
	unsigned int n =num;
	unsigned sum = 0;
	val *= val;
	for (int i = 0; i <=num; i++)
	{		if (val == 0)
			{
				return 0;
			}
			unsigned int n1 = val;
			unsigned int dim = 0;
			while (n1 != 0)
			{
				n1 /= 10;
				++dim;
			}

			while (dim!= 0)
			{
				
				n = val % 10;
				n *= n;
				sum += n;
				val /= 10;
				
				--dim;
			}
			if (sum == 1)
			{
				return 1;
			}
			if (sum == 0)
			{
				return 0;
			}
			val = sum;
			sum = 0;
		
	}
	return 0;


	



}