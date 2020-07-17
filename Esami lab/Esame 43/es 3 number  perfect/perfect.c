#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
 bool is_perfect(uint32_t n)
 {
	 if (n == 0)
	 {
		 return false;
	 }
	 if (n == 1)
	 {
		 return false;
	 }

	 uint32_t val = n;
	 uint32_t  sum = 0;
	 for(uint32_t i=1;i<n;++i)
	 {


		 if (val%i == 0)
		 {
			 sum += i;
		 }


	 }
	 
	 if (sum == n)
	 {
		 return true;
	 }
	 else
	 {
		 return false;

	 }


 }
