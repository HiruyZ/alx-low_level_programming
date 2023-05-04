#include "main.h"
/**
 * _putchar - print the character c
 * @c: The characte
 *
 * Return: 1 on success. -1 on error.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
