#include "main.h"

/**
 * create_array - create array of and initialize
 * @size: the size of array
 * @c: initialization value
 *
 * Return: if size is 0 return NULL, pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *p;

	if (!size)
		return (NULL);

	p = (char *) malloc(sizeof(char) * size);

	if (p)
	{
		while (size > 0)
			p[--size] = c;
	}
	return (p);
}
