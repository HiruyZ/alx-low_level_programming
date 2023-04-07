#include "main.h"

/**
 * _isalpha - check lowercase character
 *
 * @c: variable to check
 *
 * Return: 0 or 1
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
