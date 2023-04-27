#include "lists.h"

/**
 * add_node_end - adds new node at the end of list
 * @head: double pointer to list
 * @str: the string to add
 *
 * Return: address of new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_head;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_head = malloc(sizeof(list_t));
	if (!new_head)
		return (NULL);

	new_head->str = strdup(str);
	new_head->len = len;
	new_head->next = NULL;

	if (*head == NULL)
	{
		*head = new_head;
		return (new_head);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_head;

	return (new_head);
}
