#include "main.h"
/**
 * _memcpy - copies memory area
 *@dest: destination address to print to
 *@src: source
 *@n: number value
 *
 * Return: final result of memset
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
