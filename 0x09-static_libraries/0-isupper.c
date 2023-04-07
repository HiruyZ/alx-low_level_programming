#include "main.h"

/**
 * _isupper - check uppercase
 *
 * @c: the integer
 *
 * Return: 1 on success else 0
 */

int _isupper(int c)
{

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
