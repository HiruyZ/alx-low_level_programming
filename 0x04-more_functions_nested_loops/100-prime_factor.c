#include <stdio.h>
#include <math.h>

/**
 * main - search and display largest prime factor
 * of 612852475143
 * Return: 0 on success
 */
int main(void)
{
	long int n;
	int max;
	long int i;

	n = 612852475143;
	max = -1;

	while (n % 2 == 0)
	{
		max = 2;
		n /= 2;
	}

	for (i = 3; i <= sqrt(n); i = i + 2)
	{
		while (n % i == 0)
		{
			max = i;
			n = n / i;
		}
	}

	if (n > 2)
		max = n;

	printf("%d\n", max);

	return (0);
}
