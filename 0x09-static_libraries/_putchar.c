#include <unistd.h>

/**
 * _putchar - writes the character c
 * @c: character to print
 *
 * Return: 1 on success and -1 On error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
