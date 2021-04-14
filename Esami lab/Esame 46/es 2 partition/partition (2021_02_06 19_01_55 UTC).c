#include <stdint.h>
#include <stdbool.h>
size_t find_first_partition(const int *seq, size_t n)
{
	if (seq == NULL || n == 0)
	{
		return 0;
	}
	int val;
	
	for (size_t i = 0; i < n; i++)
	{
		bool is = 0;
		val = seq[i];
		if (i == 0)
		{
			for (size_t j =i+1; j < n; ++j)
			{
				if (val < seq[j])
				{
					is = 1;
				}
				else {
					is = 0;
					break;
				}
			}
			if (is == 1)
			{
				return i;
			}
		}
		else 	if (i == n - 1)
		{
			for (size_t j = i; j != 0; --j)
			{
				if (val > seq[j-1])
				{
					is = 1;
				}
				else is = 0;
			}
			if (is == 1)
			{

				return i;
			}

		}
		else 
		{
			for (size_t j = i; j!=0;--j)
			{
				if (val > seq[j-1])
				{
					is = 1;
				}
				else {
					is = 0;
					break;
				}
			}
			if (is == 0)
			{
				continue;
			}
			for (size_t j = i+1; j<n; ++j)
			{
				if (val <seq[j])
				{
					is = 1;
				}
				else {
					is = 0;
					break;
				}
			}
			if (is ==1)
			{
				return i;
			}
			
		}
		

	}
	return n;
}