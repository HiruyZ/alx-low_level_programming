#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copy memory area
 *
 * @destination: pointer to memory destination
 * @source: pointer to another memory source
 * @n: number of bytes to be copied from source
 *
 * Return: memory area
 */

char *_memcpy(char *destination, char *source, unsigned int n)
{
	unsigned int i;
	char *tmp = destination;

	for (i = 0; i < n; i++)
	{
		*destination = *source;
		destination++;
		source++;
	}
	destination = tmp;
	return (destination);
}
