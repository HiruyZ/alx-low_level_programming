#include "main.h"

/**
 * actual_prime - check input value is a prime number.
 * @n: input value
 * @x: the iterator
 * Return: 1 if n is a prime number. 0 if not a prime number.
 */
int actual_prime(unsigned int n, unsigned int x)
{
	if (n % x == 0)
	{
		if (n == x)
			return (1);
		else
			return (0);
	}
	return (0 + actual_prime(n, x + 1));
}
/**
 * is_prime_number - check input value is a prime number.
 * @n: input value
 * Return: 1 if n is a prime number. 0 if not a prime number
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (actual_prime(n, 2));
}
