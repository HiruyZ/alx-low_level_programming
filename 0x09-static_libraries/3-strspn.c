#include "main.h"
#include <stdio.h>

/**
 * _strspn - length of a prefix substring
 *
 * @s: pointer to memory
 * @accept: characters to be compared with s string
 *
 * Return: number of bytes common to the two strings
 */

unsigned int _strspn(char *s, char *accept)
{
	int size = 0;
	unsigned int bytes = 0;
	char *tmp = accept;
	int i;

	while (*accept++)
		size++;
	accept = tmp;

	while (*s)
	{
		accept = tmp;
		i = 0;
		while (accept < tmp + size)
		{
			if (*s == *accept)
				bytes++, i++;
			accept++;
		}
		if (i == 0)
			break;
		s++;
	}
	return (bytes);
}
