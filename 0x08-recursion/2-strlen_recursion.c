#include "main.h"
/**
 * _strlen_recursion - Get length of string
 * @s: the string
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	int strlength = 0;

	if (*s)
	{
		strlength++;
		strlength += _strlen_recursion(s + 1);
	}

	return (strlength);
}
