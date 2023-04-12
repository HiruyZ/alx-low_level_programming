#include "main.h"

/**
 * _calloc - allocates memory for array
 *
 * @nmemb: amount of array members
 *
 * @size: amount of bytes per member
 *
 * Return: NULL if nmemb or size is 0, or if error
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ch;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ch = malloc(size * nmemb);

	if (ch == NULL)
		return (NULL);

	for (i = 0; i < (size * nmemb); i++)
		ch[i] = 0;

	return ((void *)ch);
}

