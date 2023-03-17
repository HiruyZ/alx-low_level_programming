#include <stdio.h>

/**
 * main - displays all the combination of 2 digits
 *
 * Return: Return 0 on success
 */
int main(void)
{
	int x, y;

	for (y = 48; y <= 56; y++)
	{
		for (x = 49; x <= 57; x++)
		{
			if (x > y)
			{
				putchar(y);
				putchar(x);
				if (y != 56 || x != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
