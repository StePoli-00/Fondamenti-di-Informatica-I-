#include <stdint.h>
extern uint32_t vector_MCD(const uint32_t *v, size_t n);
int main(void)
{

	uint32_t v[] = { 4294967295, 1431655765, 16711935, 16843009, 50529027, 84215045, 252645135, 286331153, 858993459 };
	size_t n = 9;
	vector_MCD(v, n);

}