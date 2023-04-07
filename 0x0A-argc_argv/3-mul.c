#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - resulttiply two numbers
 *
 * @argc: argument count
 * @argv: array of the arguments
 *
 * Return: 0 on success and 1 on error
 */

int main(int argc, char *argv[])
{
	int result = 0;

	if (argc == 3)
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
