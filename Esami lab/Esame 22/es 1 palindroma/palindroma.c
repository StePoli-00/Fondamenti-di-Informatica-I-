#include "palindroma.h"
bool palindroma(const char *str) {

	if (str == NULL)
		return false;

	size_t dim = strlen(str);
	if (dim == 1)
		return true;
	if (dim == 0)
		return false;

	char *cpy = malloc((dim + 1) * sizeof(char));
	cpy[dim] = 0;
	size_t j = dim - 1;

	for (size_t i = 0; i < dim; ++i) {
		cpy[i] = str[j];
		--j;
	}

	for (size_t i = 0; i < dim; ++i) {
		if (str[i] != cpy[i]) {
			free(cpy);
			return false;
		}
	}
	free(cpy);
	return true;
}