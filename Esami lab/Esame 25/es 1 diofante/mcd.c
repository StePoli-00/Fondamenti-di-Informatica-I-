
int mcd(int a, int b)
{
	while (a != b)
	{
		if (a < b)
		{
			int t = a;
			a = b;
			b = t;
		}
		a -= b;
	}
	return a;
}