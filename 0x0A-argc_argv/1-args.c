#include "main.h"
#include <stdio.h>

/**
 * main - print the number of arguments passed
 *
 * @argc: argument count
 * @argv: array of the arguments
 *
 * Return: 0 on success
 */

int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
