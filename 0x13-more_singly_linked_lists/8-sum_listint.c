#include "lists.h"

/**
 * sum_listint - sum of all the data of list.
 * @head: pointer to list.
 * Return: sum of data in the list.
 **/
int sum_listint(listint_t *head)
{
	listint_t *node = head;
	int total_sum = 0;

	while (node)
	{
		total_sum += node->n;
		node = node->next;
	}

	return (total_sum);
}
