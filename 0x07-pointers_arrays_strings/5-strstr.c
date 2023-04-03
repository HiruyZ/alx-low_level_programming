#include "main.h"
/**
 * _strstr - locate a substring.
 *@haystack: main string
 *@needle: check this string
 *
 * Return: substring found
 */
char *_strstr(char *haystack, char *needle)
{
	int count = 0, a = 0, i = 0, j = 0, y, x;
	char *s;

	while (needle[count] != '\0')
	{
		count++;
	}
	while (haystack[i] != '\0')
	{
		i++;
			}
	if (count == 0)
		return (haystack);
	while (haystack[j] != '\0')
	{
		if (haystack[j] == needle[0])
		{
			s = &haystack[j];
			y = j;
			a = 0;
			for (x = 0; x < count; x++)
			{
				if (haystack[y] == needle[k])
					a++;
				l++;
			}
		}
		if (a == count)
			return (s);
		j++;
	}
	return ('\0');
}
