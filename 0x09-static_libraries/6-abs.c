#include "main.h"

/**
 * _abs - display absolute value of an integer
 *
 * @n: the integer
 *
 * Return: absolute of n
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * (-1);
	}
	return (n);
}
