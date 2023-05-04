#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: the binary number
 *
 * Return: the converted unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int con_val = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		con_val = 2 * con_val + (b[x] - '0');
	}

	return (con_val);
}
