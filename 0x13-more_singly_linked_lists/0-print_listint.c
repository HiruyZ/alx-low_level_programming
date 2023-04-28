#include "lists.h"

/**
 * print_listint - prints all the elements of the list.
 * @h: pointer to list.
 * Return: number of nodes
 **/
size_t print_listint(const listint_t *h)
{
	const listint_t *node = h;
	size_t cont = 0;

	while (node)
	{
		printf("%i\n", node->n);
		cont++;
		node = node->next;
	}

	return (cont);
}
