#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate two strings
 *
 * @destination: destination string pointer
 * @source: source string pointer
 *
 * Return: memory address
 */

char *_strcat(char *destination, char *source)
{
	char *temp = destination;

	while (*destination != '\0')
	{
		destination++;
	}
	while (*source != '\0')
	{
		*destination = *source;
		source++;
		destination++;
	}
	*destination++ = '\0';
	destination = temp;
	return (destination);
}
