#include "main.h"
/**
 * _memset - fill memory with a constant byte
 *@f: first value
 *@s: second value
 *@t: thirth value
 *
 * Return: result of memset
 */
char *_memset(char *f, char s, unsigned int t)
{
	unsigned int i;

	for (i = 0; i < t; i++)
	{
		f[i] = s;
	}
	return (f);
}
