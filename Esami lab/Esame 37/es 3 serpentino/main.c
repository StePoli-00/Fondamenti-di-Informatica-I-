extern char *serpentino_encode(const char *s);

int main(void)
{

	char *s = "ciao";
	char *a = serpentino_encode(s);
	free(a);
}