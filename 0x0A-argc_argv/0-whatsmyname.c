#include "main.h"
#include <stdio.h>

/**
 * main - prints its program name
 *
 * @argc: argument count
 * @argv: array of the arguments
 *
 * Return: 0 on success
 */

int main(int argc, char **argv)
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
