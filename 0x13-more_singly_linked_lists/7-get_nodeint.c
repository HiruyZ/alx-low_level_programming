#include "lists.h"

/**
 * get_nodeint_at_index - returns the node to index in list
 * @head: first node in list
 * @index: index of the node
 *
 * Return: pointer to the node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp_node = head;

	while (temp_node && i < index)
	{
		temp_node = temp_node->next;
		i++;
	}

	return (temp_node ? temp_node : NULL);
}
