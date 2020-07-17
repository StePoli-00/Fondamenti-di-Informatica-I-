//#include <stdio.h>
//#include <stdint.h>
//#include <string.h>
//#include <stdlib.h>
//#include <stdbool.h>
//unsigned int irpef(unsigned int stipendio, unsigned int *scaglioni, unsigned int *aliquote, size_t n)
//{
//	
//	if (stipendio == 0)
//	{
//
//		return 0 ;
//	}
//	unsigned int tot = 0;
//	size_t  i = 0;
//	size_t j = 0;
//	int diff = (int)stipendio -(int)scaglioni[0];
//	while (diff>0)
//	{
//
//		if ((unsigned int)diff > scaglioni[j])
//		{
//			++j;
//			tot+=(scaglioni[j]* aliquote[i]) / 100;
//		}
//		else
//		{
//			tot += (diff* aliquote[i]) / 100;
//			++j;
//		}
//		++i;
//	 diff = (int)stipendio - (int)scaglioni[j];
//		
//
//	}
//	return tot;
//
//
//}