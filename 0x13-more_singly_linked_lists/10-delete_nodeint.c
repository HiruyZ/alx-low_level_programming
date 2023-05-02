#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at specific index of list.
 * @head: pointer to list.
 * @index: index in the node to delete.
 * Return: 1 for success, -1 if error.
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux_node = *head;
	listint_t *delete_node = *head;
	unsigned int idx;
	unsigned int cont = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		*head = delete_node->next;
		free(delete_node);
		return (1);
	}

	idx = index - 1;
	while (aux_node && cont != idx)
	{
		cont++;
		aux_node = aux_node->next;
	}

	if (cont == idx && aux_node)
	{
		delete_node = aux_node->next;
		aux_node->next = delete_node->next;
		free(delete_node);
		return (1);
	}

	return (-1);
}
