#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>


bool is_prime(unsigned int val)
{
	if (val == 0)
	{
		return false;
	}
	if (val == 1 || val == 2)
	{
		return true;
	}
	for (unsigned int  i = 2; i < val; ++i)
	{
		if (val%i == 0)
		{
			return false;
		}
	}
	return true;


}
void stampa_scomposizione(unsigned int n )
{

	if (n == 0|| n == 1 )
	{
		printf("%d", n);
		return;

	}
	
	int cnt = 0;
	int i = 2;
	while (n != 1)
	{
		if (n == 2147483647)
		{
			printf("%d",n);
			return;



		}
		if(is_prime(i)==true)
		{

			while (n%i == 0)
			{
				n = n / i;
				++cnt;
			}
			if (n == 1 && cnt==1)
			{
				printf("%d ", i);
				break;
			}
			else
			{
				if (n == 1 && cnt != 1 && cnt!=0)
				{
					printf("%d^%d ", i,cnt);
					break;
				}
			}
			if (cnt == 1 && cnt !=0)
			{
				printf("%d * ", i);
			}
			else if( cnt!=0)
			{
					printf("%d^%d *", i, cnt);
				
				
			}
			
		}
		cnt = 0;
		++i;
	}



}