#include "main.h"

/**
 * _puts_recursion - Display the string with a new line
 * @s: the string
 *
 * Return: 1 on success -1 on error
 */
void _puts_recursion(char *s)
{
	if (*s > 0 || *s < 0)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
		return;
	}
}
