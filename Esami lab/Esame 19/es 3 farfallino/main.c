
extern char *farfallino_encode(const char *s);
extern char *farfallino_decode(const char *s);
int main(void)
{
	char *s = "aiuola";
	char *s2 = "cofostafantifinofo";
	char *a = farfallino_encode(s);
	char *b = farfallino_decode(s2);



 }