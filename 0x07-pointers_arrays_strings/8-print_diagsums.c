#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - display sum of the two diagonals
 *@a: first value
 *@size: the size
 */
void print_diagsums(int *a, int size)
{
	int x, sum_a = 0, sum_b = 0;

	for (x = 0; x < size; x++)
	{
		sum_a = sum_a + a[x * size + x];
	}
	for (x = size - 1; x >= 0; x--)
	{
		sum_b += a[x * size + (size - x - 1)];
	}
	printf("%d, %d\n", sum_a, sum_b);
}
