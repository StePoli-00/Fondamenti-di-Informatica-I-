#include <stdint.h>
extern unsigned int irpef(unsigned int stipendio, unsigned int *scaglioni, unsigned int *aliquote, size_t n);

int main(void)
{
	unsigned int s[] = {0,15000,28000,55000,75000,};
	unsigned int a[] = { 23,27,38,41,43};
	
	unsigned int tot = irpef(25000, s, a, 5);




}