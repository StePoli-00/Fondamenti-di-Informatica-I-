#include "carcassonne.h"
int main(void)
{

	/*casella cas = { 1,0,{ 'f','s','f','s' } };
	int a = 0;
	casella tab[] = { { 0,1,{ 'c','c','c','c' } },{ 1,1,{ 'f','f','f','c' } },{ 0,0,{ 'c','s','f','s' } } };*/
	casella cas = { 0,1,{'c','s','s','c'} };
	casella tab[] = { {0,0,{'c','s','f','s'}} };
	size_t dim = 1;
	controlla_casella(&cas, tab, dim);
}