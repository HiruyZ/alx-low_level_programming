#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @num: the integer to check
 * Return: 0 if num is zero
 * 1 if num is positive
 * -1 if num is negative
 */
int print_sign(int num)
{
	if (num > 0)
	{
		_putchar('+');
		return (1);
	} else if (num == 0)
	{
		_putchar(48);
		return (0);
	} else if (num < 0)
	{
		_putchar('-');
	}
		return (-1);
}

