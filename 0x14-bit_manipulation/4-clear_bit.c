#include "main.h"

/**
 * clear_bit - sets the value of a bit in a specified index to 0.
 * @n: pointer to an unsigned long int.
 * @index: index of bit.
 *
 * Return: 1 on success, -1 on error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;

	if (*n & x)
		*n ^= x;

	return (1);
}
