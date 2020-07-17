#include <stdint.h>
extern int *rimuovi_multipli(const int *v, size_t size, size_t *newsize);
int main(void)
{
	int v[] = { 4,3,2,5,6 };
	size_t n= 5;
	size_t new = 0;
	int *a = rimuovi_multipli(v, n, &new);





}