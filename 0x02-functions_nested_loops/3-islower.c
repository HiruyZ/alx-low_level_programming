#include "main.h"

/**
 * _islower - lowercase checker
 * @alpha: is the character that is checked
 * Return: if lowercase retutn 1 else 0
 */

int _islower(int alpha)
{
	if (alpha >= 'a' && alpha <= 'z')
		return (1);
	else
		return (0);
}
