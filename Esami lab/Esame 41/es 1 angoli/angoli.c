//#include "angoli.h"
//#include <stdint.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdbool.h>
//#include <stdio.h>
//
//
//struct angolo somma_angoli(struct angolo a, struct angolo b)
//{
//	if (a.gradi==0 &&a.primi==0 && a.secondi==0)
//	{
//		return b;
//	}
//	if (b.gradi == 0 && b.primi == 0 && b.secondi == 0)
//	{
//		return a;
//	}
//	struct angolo s;
//	int sum=(int)a.secondi + b.secondi;
//	uint8_t res = 0;
//	if (sum > 360 || sum > 60)
//	{
//		while (sum >= 60)
//		{
//			sum -= 60;
//			++res;
//		}
//	}
//	
//	uint8_t c=a.primi +res;
//	a.primi = (uint16_t)c;
//	s.secondi =sum;
//	res = 0;
//	sum =(int)a.primi + b.primi;
//	
//	if (sum > 360 || sum>60)
//	{
//		while (sum > 60)
//		{
//			sum -= 60;
//			++res;
//		}
//	}
//	s.primi = sum;
//c =	a.gradi + res;
//	a.gradi = c;
//	s.gradi =a.gradi + b.gradi;
//	return s;
//
//	
//	
//
//
//
//}