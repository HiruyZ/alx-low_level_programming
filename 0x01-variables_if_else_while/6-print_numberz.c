#include <stdio.h>

/**
 * main - Displays digits from 0-9
 *
 * Return: Returns 0 for success
 */
int main(void)
{
	int y;

	for (y = 48; y < 58; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}
