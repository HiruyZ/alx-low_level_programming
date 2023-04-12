#include "main.h"

/**
 * array_range - creates array of integers.
 * @min: minimum of values
 * @max: maximum of values
 *
 * Return: pointer
 */

int *array_range(int min, int max)
{
	int *pntr;
	int i, arrlen;

	if (min > max)
		return (NULL);

	arrlen = max - min + 1;
	pntr = malloc(arrlen * sizeof(int));
	if (!pntr)
		return (NULL);

	for (i = 0; i < arrlen; i++)
		pntr[i] = min++;

	return (pntr);
}
