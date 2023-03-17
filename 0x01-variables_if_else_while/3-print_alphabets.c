#include <stdio.h>

/**
 * main - Display the alphabets in lower and upper case
 *
 * Return: Return 0 if successful
 */
int main(void)
{
	char alpha[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int x;

	for (x = 0; x < 52; x++)
	{
		putchar(alpha[x]);
	}
	putchar('\n');
	return (0);
}
