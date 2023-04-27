#include "lists.h"

/**
 * list_len - show number of elements in a linked list
 * @h: pointer to the list
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t ls = 0;

	while (h)
	{
		ls++;
		h = h->next;
	}
	return (ls);
}
