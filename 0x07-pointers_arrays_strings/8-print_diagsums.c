#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - display sum of the two diagonals
 *@a: first value
 *@size: the size
 */
void print_diagsums(int *a, int size)
{
	int x, y, suma_a = 0, suma_b = 0, a, b = 0;

	a = size - 1;
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (x == j)
				suma_a += a[b];
			if (y == a)
				suma_b += a[b];
			l++;
		}
		a--;
	}
	printf("%d, %d\n", suma_a, suma_b);
}
