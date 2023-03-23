#include "main.h"

/**
 * _isupper - upper case checker
 * @c: checked variable
 *
 * Return: 0 or 1
 */

int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
