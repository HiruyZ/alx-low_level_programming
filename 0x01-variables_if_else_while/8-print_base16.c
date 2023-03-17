#include <stdio.h>

/**
 * main - Display numbers in base16 hexadecimal
 *
 * Return: Return 0 on success
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 103; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
