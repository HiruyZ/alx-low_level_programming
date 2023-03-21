#include "main.h"

/**
 * print_alphabet_x10 - display 10 times the lowercase alphabets
 *
 */
void print_alphabet_x10(void)
{
	char alpha;
	int x;

	x = 0;

	while (x < 10)
	{
		alpha = 'a';
		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
		x++;
	}
}
