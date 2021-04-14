#include "scacchiera.h"
int main(void)
{
	char cas[64] = { 'r','n','b','q','k','b','n','r','p','p','p','p','p','p','p','p',' ',' ', ' ', ' ', ' ', ' ', ' ', ' '};
	struct scacchiera s;
	s.caselle[64]=cas;
	stampa_scacchiera(&s);


}