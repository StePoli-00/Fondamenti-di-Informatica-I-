#define _CRT_SECURE_NO_WARNINGS
#include "strip_comments.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void strip_comments(const char *in_filename, const char *out_filename)
{FILE *f=fopen(in_filename,"r");
 FILE *g=fopen(out_filename,"w");
 if (f == NULL  )
 {
	 fclose(f);
	 fclose(g);
	 return;

 }
 char c = fgetc(f);
 while (c != EOF)
 {

	 if (c != '#')
	 {

		 while (c != '\n'&& c != EOF)
		 {
			 fprintf(g, "%c", c);
			 c = fgetc(f);
		 }
		 fprintf(g, "\n");
		 c = fgetc(f);
	 }

	 else
	 {
		 while (c != '\n' && c!=EOF)
		 {
			 c = fgetc(f);
		 }
		 c = fgetc(f);
	 }
 }

 fclose(f);
 fclose(g);
 return;

}