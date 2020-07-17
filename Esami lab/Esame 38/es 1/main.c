#include <stdint.h> 
extern int *prodotto(const int *v, size_t n);
int main(void)
{
	int v[] = { 1,2,3,4,5 };
	size_t n = 5;
	int *a = prodotto(v, n);

}