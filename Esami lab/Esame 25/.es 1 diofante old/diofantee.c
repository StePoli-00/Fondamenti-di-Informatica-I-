int  ammette_soluzioni(int a, int b, int c)
{
	if (a == 0 && b == 0 && c == 0)
	{
	return 1;
	}
	
	if(a == 0 && b == 0 && c != 0)
	{
		return 0;
	}
	if (a == 0 && b != 0)
	{
		if (c%b == 0)
		{
			return 1;
		}
		else
		{ return 0;
		}
	}
	if (a != 0 && b == 0)
	{
		if (c%a == 0)
		{
			return 1;
		}
		else { return 0; }
	}
	
	unsigned int t = 0;
	if (a < 0)
	{
		a *= -1;
	}
	if (b < 0)
	{
		b *= -1;
	}

	while (a != b)
	{
		if (a < b)
		{
			t = a;
			a = b;
			b = t;
		}
		a -= b;

	}
	if (c%a == 0)
	{
		return 1;
	}
	else
	{
		return 0;		
	}


}