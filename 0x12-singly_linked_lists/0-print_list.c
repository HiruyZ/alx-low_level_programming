#include "lists.h"

/**
  * print_list - prints all elements of list
  * @h: list to print elements
  * Return: number of nodes in list
  */
size_t print_list(const list_t *h)
{
	int x = 0, ret = 1;
	char nul[] = "(nil)";

	if (!h)
		return (0);
	if (h->str)
		x = _strlen(h->str);
	printf("[%d] ", x);

	if (!h->str)
		printf("%s\n", nul);
	else
		printf("%s\n", h->str);
	if (h->next)
		ret += print_list(h->next);
	return (ret);
}

/**
 * _strlen - get string length
 * @str: string
 * Return: string length
 */
int _strlen(char *str)
{
	int x;

	for (x = 0; *(str + x);)
		x++;
	return (x);
}
