#include "main.h"
#include <stdio.h>

/**
 * _strncpy - concatenates two strings
 *
 * @destination: pointer to destination
 * @source: pointer to source
 * @n: integer number
 *
 * Return: memory area
 */

char *_strncpy(char *destination, char *source, int n)
{

	char *temp1 = destination;
	char *temp2 = source;

	while (source < temp2 + n && *source != '\0')
	{
		*destination = *source;
		source++;
		destination++;
	}
	while (source < temp2 + n)
	{
		*destination = '\0';
		destination++;
		source++;
	}
	destination = temp1;
	source = temp2;

	return (destination);
}
