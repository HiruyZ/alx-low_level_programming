#include "main.h"

/**
 * _print_rev_recursion - Display string in reverse
 * @s: the string
 * Return: 1 success on success and -1 on error.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
