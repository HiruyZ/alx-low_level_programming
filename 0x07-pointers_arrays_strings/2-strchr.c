#include "main.h"
/**
 * _strchr - find character in the string
 *@s: the string
 *@c: the wanted character
 *
 * Return: the final result
 */
char *_strchr(char *s, char c)
{

	if (*s == '\0')
		return (s);
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
	       s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
