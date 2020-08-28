#include <stdint.h>
extern int capovolgi(const char *filein, const char *fileout);
int main(void)
{
	char s[] = "file1.bin";
	char s2[] = "new.bin";
	int a = capovolgi(s, s2);


}