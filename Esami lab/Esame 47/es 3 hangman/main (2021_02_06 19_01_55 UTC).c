#include <stdio.h>
extern char *hangman(const char* frase, const char* lettere);

int main(void)
{
	char s[] = { "Attenzione, la punteggiatura non e' mai nascosta!!" };
	char s2[] = { "no" };
	char *s3 = hangman(s, s2);
	printf("%s\n", s3);
	printf("*******on*, ** **n********** non *' *** n*******!!\n");
	/*char s5[]= { "il gioco dell'impiccato non e' case-sensitive" };
	char s6[] = { "aeiou" };
	char *s3= hangman(s5, s6);
	printf("%s\n", s3);
	printf("i* *io*o *e**'i**i**a*o *o* e' *a*e-*e**i*i*e\n");
*/

}