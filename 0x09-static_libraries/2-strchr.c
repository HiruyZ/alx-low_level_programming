#include "main.h"
#include <stdio.h>

/**
 * _strchr - find a character in a string
 *
 * @s: pointer to memory (string)
 * @c: character to be found
 *
 * Return: memory area
 */

char *_strchr(char *s, char c)
{
	while (s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (NULL);
	}
	return (NULL);
}
