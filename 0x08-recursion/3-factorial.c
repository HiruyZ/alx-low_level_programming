#include "main.h"

/**
 * factorial - factorial of n
 * @n: the integer
 *
 * Return: 1 on success 1 and -1 on error
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
