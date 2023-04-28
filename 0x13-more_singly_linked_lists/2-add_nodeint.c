#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node
 * @n: data to insert in new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newlist;

	newlist = malloc(sizeof(listint_t));
	if (!newlist)
		return (NULL);

	newlist->n = n;
	newlist->next = *head;
	*head = newlist;

	return (newlist);
}
