#include <stdio.h>
int main(void)
{
	 extern int fattoriali(int * src, int * dst, int lunghezza);
	int src[3] = { 1,3,0 };
	int dst[3];
	int ret =fattoriali(src, dst, 3);

}