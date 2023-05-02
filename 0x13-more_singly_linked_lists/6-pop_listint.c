#include "lists.h"

/**
 * pop_listint - deletes head node of linked list
 * @head: pointer to list
 * Return: head node data
 **/
int pop_listint(listint_t **head)
{
	int node_data;
	listint_t *node1 = *head;

	if (!node1)
		return (0);

	node_data = (*head)->n;
	*head = node1->next;
	free(node1);
	return (node_data);
}
