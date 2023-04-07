#include "main.h"
#include <stdio.h>

/**
 * main - prints all the arguments
 *
 * @argc: argument count
 * @argv: array of the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	int i;

	if (argc >= 1)
		for (i = 0; i < argc ; i++)
			printf("%s\n", argv[i]);
	return (0);
}
