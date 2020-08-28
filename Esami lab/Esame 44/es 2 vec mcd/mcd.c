//#include <stdint.h>
//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//
//uint32_t vector_MCD(const uint32_t *v, size_t n)
//{
//	if (v == NULL || n == 0)
//	{
//		return 0;
//	}
//
//	for (size_t i = 0; i < n; i++)
//	{
//		if (v[i] == 0)
//		{
//			return 0;
//		}
//	}
//	uint32_t max = v[0];
//	for (size_t i = 0; i < n; i++)
//	{
//		if (v[i] > max)
//		{
//			max = v[i];
//		}
//	}
//
//
//	uint32_t num = max;
//	for (size_t i = 0; i < num; i++)
//	{
//		bool found = false;
//		for (size_t j = 0; j < n; ++j)
//		{
//			if (v[j] % max == 0)
//			{
//				found = true;
//				continue;
//			}
//			found = false;
//			break;
//		}
//		if (found == true)
//		{
//			return max;
//		}
//		--max;
//
//	}
//
//	return max;
//}
//
