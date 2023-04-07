#include "main.h"

/**
 * _islower - checks for lowercase
 *
 * @c: the character to check
 *
 * Return: 0 or 1
 */

int _islower(int c)
{
	int i;

	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
}
