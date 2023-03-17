#include <stdio.h>

/**
 * main - Display digits from 0 to 9
 *
 * Return: Return 0 on success
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		printf("%d", x);
	}
	putchar('\n');
	return (0);
}
