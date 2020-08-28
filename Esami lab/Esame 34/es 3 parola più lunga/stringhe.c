//#define _CRT_SECURE_NO_WARNINGS
//#include <stdint.h>
//#include <stdlib.h>
//#include <string.h>
//
//char *parola_piu_lunga(const char *sz)
//{
//	if (sz == NULL) {
//		return NULL;
//	}
//	size_t z = 0, z_prec = 0, cnt = 0;
//	size_t n = strlen(sz);
//	char *dst = malloc((n + 1) * sizeof(char));
//	size_t i = 0;
//	for (i = 0; i < n; ++i) {
//		if (sz[i] == 0) {
//			break;
//		}
//		if (sz[i] != 32 && sz[i] != '\n' && sz[i] != '\t') {
//			++z;
//		}
//		else {
//			if (z < z_prec || z == z_prec) {
//				z = 0;
//				continue;
//			}
//			else {
//				z_prec = z;
//				for (size_t j = 0; z != 0; ++j) {
//					dst[j] = sz[i - z];
//					z -= 1;
//					++cnt;
//				}
//				dst[cnt] = 0;
//				cnt = 0;
//			}
//		}
//	}
//	if (z > z_prec) {
//		for (size_t j = 0; z != 0; ++j) {
//			dst[j] = sz[i - z];
//			z -= 1;
//			++cnt;
//		}
//		dst[cnt] = 0;
//		cnt = 0;
//	}
//	return dst;
//}
//
