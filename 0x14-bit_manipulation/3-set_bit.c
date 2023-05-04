#include "main.h"

/**
 * set_bit - sets a bit in specified index to 1
 * @n: the pointer to the number
 * @index: index of the bit
 *
 * Return: 1 on success, -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
