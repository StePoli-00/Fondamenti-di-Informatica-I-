#include <stdint.h>
#include <math.h>
#include <stdlib.h>
void dct(const double *in, double *out, size_t N)
{
	if (in == 0 || out == 0 || N == 0)
	{
		return;
	}
	double *v = malloc(N * sizeof(double));
	for (size_t i = 0; i < N; i++)
	{
		v[i] = in[i];
	}
	double n = N;
	for (size_t i = 0; i < N; i++)
	{
		double u = 0;
		if (i == 0)
		{
			u = sqrt(1 / n);
		}
		else
		{
			u = sqrt(2 / n);
		}
		double sum = 0;
		for (size_t x = 0; x <= N-1; x++)
		{
			double div =( (2 * x + 1)*(i * 3.14))/(2*n);
			sum+=v[x] * cos(div);
			div = 0;
		}
		out[i] = u * sum;
	}
	free(v);

	return;


}

