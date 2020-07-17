#include "dev_standard.h"
extern double calcola_dev(const double *vec, size_t size);

int main(void)
{
	double v[] = { 1,2,3,4,5,6 };
	size_t size = 6;
	calcola_dev(v, size);



}