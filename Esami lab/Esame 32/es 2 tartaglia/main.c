#include <stdint.h>
extern unsigned int *tartaglia(unsigned int *v, size_t n);

int main(void)
{
	unsigned int v[] = { 1,2,1 };
	size_t n =3;
	unsigned int *tar = tartaglia(v, n);



}