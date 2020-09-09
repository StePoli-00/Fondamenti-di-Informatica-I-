#include "matrix.h"
bool matrix_read(struct matrix *m, FILE *f)
{

	if (m == NULL || f == NULL)
	{
		return false;
	}
	int k = 0;
	int j = 0;
	if (!fscanf(f, "%d", &k))
	{
		//fclose(f);
		return false;
	}
	fgetc(f);
	if(!fscanf(f, "%d", &j))
	{
		//fclose(f);
		return false;
	}
	fgetc(f);
	m->cols = (size_t)j;
	m->rows = (size_t)k;
	double val = 0;
	m->data = calloc(m->cols*m->rows, sizeof(double));
	for (size_t r = 0; r < m->rows; ++r)
	{
		for (size_t c = 0; c < m->cols; ++c)
		{
			fscanf(f, "%lf", &val);
			m->data[r*m->cols + c] = val;
			fgetc(f);

		}
	}
	//fclose(f);
	return true;
}
