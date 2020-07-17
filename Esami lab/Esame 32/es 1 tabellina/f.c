#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

 void stampa_tavola_pitagorica(FILE *f, unsigned int n)
{
	 
	 if(f==NULL|| n==0)
	 {
		 return;
	 }
	 for (int i = 1; i <= n; ++i)
	 {
		 for (int j = 1; j <=n; ++j)
		 {

			 fprintf(f,"%d \t ", i*j);

		 }
		 fprintf(f,"\n");


	 }
	

}