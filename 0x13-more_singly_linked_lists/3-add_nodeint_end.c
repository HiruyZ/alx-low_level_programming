#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list.
 * @head: pointer to the first element
 * @n: constant int to set in the new node.
 * Return: address of the new element
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newlist, *aux = *head;

	newlist = malloc(sizeof(listint_t));
	if (newlist == NULL)
		return (NULL);
	newlist->n = n;
	newlist->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = newlist;
	}
	else
		*head = newlist;

	return (newlist);
}
