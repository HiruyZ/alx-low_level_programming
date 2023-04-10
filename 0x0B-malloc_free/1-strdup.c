#include "main.h"

/**
 * _strdup - create a new array containing a copy of the given string
 * @str: pointer to the string to copy
 *
 * Return: if str is NULL return NULL or return a pointer to the new copy
 */
char *_strdup(char *str)
{
	char *new;
	unsigned int size = 0;

	if (str)
	{
		while (str[size++])
			;

		new = malloc(sizeof(char) * size);
		if (new)
		{
			while (size--)
				new[size] = str[size];

			return (new);
		}
	}
	return (NULL);
}
