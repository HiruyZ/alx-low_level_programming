#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copy string pointed to by source
 *
 * @destination: parameter defined in main
 * @source: parameter defined in main
 *
 * Return: pointer to destination
 */

char *_strcpy(char *destination, char *source)
{
	char *tmp = destination;

	while (*source != '\0')
	{
		*destination = *source;
		source++;
		destination++;
	}
	*destination = '\0';
	return (tmp);
}
