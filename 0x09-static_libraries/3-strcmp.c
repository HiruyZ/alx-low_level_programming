#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 1 or -1 or 0
 */

int _strcmp(char *s1, char *s2)
{

	while (*s1 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
		{
			if (*s1 > *s2)
				return (*s1 - *s2);
			else if (*s1 < *s2)
				return (*s1 - *s2);
			s1++;
			s2++;
		}
	}

	return (0);
}
