#include <stdio.h>

/**
 * main - Display the alphabets.
 *
 * Return: Return 0
 */
int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	int x;

	for (x = 0; x < 26; x++)
	{
		putchar(alpha[x]);
	}
	putchar('\n');
	return (0);
}
