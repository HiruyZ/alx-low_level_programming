#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - search a string for any of the set of bytes
 *
 * @s: pointer to memory
 * @accept: characters to be compared with s string
 *
 * Return: integer, pointer to the first byte common to the two strings
 */

char *_strpbrk(char *s, char *accept)
{
	int size = 0;
	char *ptr = s;
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
				ptr = s, i++;
			accept++;
		}
		if (i == 1)
			return (ptr);
		s++;
	}
	return (NULL);
}
