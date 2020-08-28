//#include <stdint.h> 
//#include <stdio.h>
//void stampa_croce_stdout(size_t dim)
//{
//	if (dim == 0)
//	{
//		return;
//	}
//	if (dim == 1)
//	{
//		printf("\\/\n");
//		printf("/\\\n");
//		return;
//
//	}
//	size_t j = 0;
//	
//	size_t spis =dim;
//	size_t spes = 0;
//	size_t spii = 0;
//	size_t spei = dim;
//	size_t n = dim * 2;
//	while (j !=n)
//	{
//		if(j<dim)
//		{for (size_t i = 0; i < spes; i++)
//		{
//			printf(" ");
//		}
//		printf("\\");
//		
//		for (size_t i = 0; i < spis; i++)
//		{
//			printf(" ");
//		}
//		printf("/\n");
//		++spes;
//		--spis;
//		++j;
//		}
//		if (j >= dim)
//		{
//			for (size_t i = 0; i < spei-1; i++)
//			{
//				printf(" ");
//			}
//			printf("/");
//			if (j == n- 1)
//			{
//				spii = dim;
//			}
//			for (size_t i = 0; i < spii*2; i++)
//			{
//				printf(" ");
//			}
//			printf("\\ \n");
//			++spii;
//			++j;
//			--spei;
//			
//
//		}
//
//
//
//
//
//	}
//
//	return;
//
//}