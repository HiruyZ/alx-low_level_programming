#include "main.h"
/**
 * _strspn - find length of a prefix substring
 *@s: main string
 *@accept: substring being searched
 *
 * Return: the final count
 */
unsigned int _strspn(char *s, char *accept)
{
	int j = 0, i = 0;
	int c = 0;

	while (s[i] != ' ' && s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				c++;
			j++;
		}
		i++;
		j = 0;
	}
	return (c);
}
