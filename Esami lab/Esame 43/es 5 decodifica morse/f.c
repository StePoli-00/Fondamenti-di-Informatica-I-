//#include "f.h"
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//char* decodifica_morse(const char *codice) {
//
//	size_t c = 1; //lettere, parte da 1 perchè conto l'ultima parola
//	size_t b = 0; //spazi tra una parola e l'altra
//	char *let = malloc(5 * sizeof(char));
//	let[4] = 0;
//	// fare malloc con totale letture di scanf
//	char A[] = "._";
//	char B[] = "_...";
//	char C[] = "_._.";
//	char D[] = "_..";
//	char E[] = ".";
//	char F[] = ".._.";
//	char G[] = "__.";
//	char H[] = "....";
//	char I[] = "..";
//	char J[] = ".___";
//	char K[] = "_._";
//	char L[] = "._..";
//	char M[] = "__";
//	char N[] = "_.";
//	char O[] = "___";
//	char P[] = ".__.";
//	char Q[] = "__._";
//	char R[] = "._.";
//	char S[] = "...";
//	char T[] = "_";
//	char U[] = ".._";
//	char V[] = "..._";
//	char W[] = ".__";
//	char X[] = "_.._";
//	char Y[] = "_.__";
//	char Z[] = "__..";
//	char sp[] = "/";
//
//	size_t k = 0;
//	size_t i = 0;
//	size_t l = strlen(codice);	//controllo lunghezza parola
//	for (i = 0; i < l; ++i) {
//		if (codice[i] == ' ')
//			++c;
//		if (codice[i] == '/')
//			++b;
//	}
//	if (b > 0) {
//		c = c - 2 * b;
//	}
//	char *par = malloc(c + 3 * sizeof(char));	//alloco spazio per la parola 
//	par[c] = 0;
//
//	size_t j = 0;
//	i = 0;
//	while (codice[i] != '\0') {
//		++i;
//		while (codice[i] != ' ') {	//leggo la lettera sottoforma di codice
//			let[j] = codice[i];
//			++i;
//			++j;
//			if (codice[i] == '\0')
//				break;
//		}
//		let = realloc(let, sizeof(char)*(j + 1));
//		let[j] = 0;
//		j = 0;
//
//		//if (strcmp(A, let) == 0)	//cerco la lettera
//		//	par[k] = 'A';
//
//		//if (strcmp(B, let) == 0)
//		//	par[k] = 'B';
//
//		//if (strcmp(C, let) == 0)
//		//	par[k] = 'C';
//
//		//if (strcmp(D, let) == 0)
//		//	par[k] = 'D';
//
//		//if (strcmp(E, let) == 0)
//		//	par[k] = 'E';
//
//		//if (strcmp(F, let) == 0)
//		//	par[k] = 'F';
//
//		//if (strcmp(G, let) == 0)
//		//	par[k] = 'G';
//
//		//if (strcmp(H, let) == 0)
//		//	par[k] = 'H';
//
//		//if (strcmp(I, let) == 0)
//		//	par[k] = 'I';
//
//		//if (strcmp(J, let) == 0)
//		//	par[k] = 'J';
//
//		//if (strcmp(K, let) == 0)
//		//	par[k] = 'K';
//
//		//if (strcmp(L, let) == 0)
//		//	par[k] = 'L';
//
//		//if (strcmp(M, let) == 0)
//		//	par[k] = 'M';
//
//		//if (strcmp(N, let) == 0)
//		//	par[k] = 'N';
//
//		//if (strcmp(O, let) == 0)
//		//	par[k] = 'O';
//
//		//if (strcmp(P, let) == 0)
//		//	par[k] = 'P';
//
//		//if (strcmp(Q, let) == 0)
//		//	par[k] = 'Q';
//
//		//if (strcmp(R, let) == 0)
//		//	par[k] = 'R';
//
//		//if (strcmp(S, let) == 0)
//		//	par[k] = 'S';
//
//		//if (strcmp(T, let) == 0)
//		//	par[k] = 'T';
//
//		//if (strcmp(U, let) == 0)
//		//	par[k] = 'U';
//
//		//if (strcmp(V, let) == 0)
//		//	par[k] = 'V';
//
//		//if (strcmp(W, let) == 0)
//		//	par[k] = 'W';
//
//		//if (strcmp(X, let) == 0)
//		//	par[k] = 'X';
//
//		//if (strcmp(Y, let) == 0)
//		//	par[k] = 'Y';
//
//		//if (strcmp(Z, let) == 0)
//		//	par[k] = 'Z';
//
//		//if (strcmp(sp, let) == 0)
//		//	par[k] = ' ';
//
//		++k;
//
//	
//	
//
//	}
//
//
//
//	return par;
//}
