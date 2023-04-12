#include "main.h"

/**
 * _realloc - reallocates a memory block
 *
 * @ptr: pointer to the memory
 * @old_size: preivous size of memory
 * @new_size: new size of memory
 *
 * Return: pointer to the resized area and NULL if error
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *source = ptr;
	char *destination;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}

	destination = malloc(sizeof(char) * new_size);
	if (destination == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		destination[i] = source[i];

	free(ptr);
	return ((void *)destination);
}
