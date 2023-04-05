#include "main.h"

/**
 * power_of - print natural square root of a number
 * @y: input value
 * @x: iterator
 * Return: square root or -1 on error
 */
int power_of(int y, int x)
{
	if (x % (y / x) == 0)
	{
		if (x * (y / x) == y)
			return (x);
		else
			return (-1);
	}
	return (0 + power_of(y, x + 1));
}
/**
 * _sqrt_recursion - print natural square root of a number
 * @n: input value
 * Return: square root or or -1 on error
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (power_of(n, 2));
}
