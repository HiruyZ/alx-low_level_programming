#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @destination: destination pointer
 * @source: source pointer
 * @n: number integer
 *
 * Return: memory address
 */

char *_strncat(char *destination, char *source, int n)
{
	char *temp1 = destination;
	char *temp2 = source;

	while (*destination != '\0')
	{
		destination++;
	}
	while (source < temp2 + n && *source != '\0')
	{
		*destination = *source;
		source++;
		destination++;
	}
	*destination++ = '\0';
	destination = temp1;
	return (destination);
}
