#include <stdint.h>
extern char *spacefill(const char *str, size_t n);
int main(void)
{

	char *s = "sequanza con a capo 	 tabulazioni e      $^%& parole con(/ &%$ strani caratteri";
	size_t n = 10;
	char *a = spacefill(s, n);





}