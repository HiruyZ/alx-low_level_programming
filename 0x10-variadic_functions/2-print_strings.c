#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @n: number of arguments
 * @separator: string separator
 * Return: 0.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;
	char *str;

	if (separator == NULL)
	{
		separator = "";
	}

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(x, char *);
		if (str == NULL)
		{
			printf("(nil)");
			break;
		}
		printf("%s", str);
		if (n == i + 1)
		{
			break;
		}
		printf("%s", separator);
	}
	printf("\n");
	va_end(x);
}
