#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Displays the alphabet without e and q.
 *
 * Return: Return 0 for success
 */
int main(void)
{
	int x;

	for (x = 97; x < 123; x++)
	{
		if (x != 101 && x != 113)
		{
			putchar(x);
		}
	}
	putchar('\n');
	return (0);
}
