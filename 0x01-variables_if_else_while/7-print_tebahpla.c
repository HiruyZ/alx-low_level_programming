#include <stdio.h>

/**
 * main - Display alphabets in reverse
 *
 * Return: Return 0 on success
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
