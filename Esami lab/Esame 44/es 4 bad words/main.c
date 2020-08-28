#define _CRT_SECURE_NO_WARNINGS
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
extern void bad_word_filter(char *s, char **words, size_t nwords);
int main(void)
{
	// ASSOLUTAMENTE NO!!char *k = "sei un carciofo";
	//char *s = malloc(16 * sizeof(char));
	//strcpy(s, "sei un carciofo");
	// BUONA char s[16] = "sei un carciofo";
	char s[] = "Il tuo cavolfiore e` molto broccolo.";
	char *s1[] = {"carciofo", "broccolo", "cavolfiore" };
	size_t n = 3;
	bad_word_filter(s, s1, n);
	printf("%s", s);
	getchar();


}