#include <stdbool.h>
bool triangolare(int n)
{
	if (n <= 0)
	{
		return false;
	}
	if (n == 1)
	{
		return true;

	}
	if (n % 3 == 0|| n%5==0)
	{
		return true;
	}

	else {
		return false;
	}

}