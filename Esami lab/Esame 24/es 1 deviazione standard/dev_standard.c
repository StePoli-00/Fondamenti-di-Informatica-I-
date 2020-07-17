#include "dev_standard.h"
#include  <math.h>
double calcola_dev(const double *vec, size_t size)
{
	double media = 0;
	for (size_t i=0; i <size; i++)
	{
		media += vec[i];
	}
	media = media / size;
	double dev = 0;
	double val = 0;
	double sum = 0;
	for (size_t i = 0; i < size; i++)
	{
		val= (vec[i] - media);
		val = val * val;
		sum += val;
	}
	sum = sum / size;
	dev = sqrt(sum);
	return dev;





}