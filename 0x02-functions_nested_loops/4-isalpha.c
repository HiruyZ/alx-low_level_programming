#include "main.h"

/**
 * _isalpha - checks if it is alphabet
 * @alpha: The character to be checked
 * Return: 1 for success, 0 if not
 */
int _isalpha(int alpha)
{
	return ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'));
}
