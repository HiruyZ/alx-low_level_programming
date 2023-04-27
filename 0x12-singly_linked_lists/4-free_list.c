#include "lists.h"

/**
  * free_list - free linked list
  *
  * @head: the head of the list
  * Return: void
  */
void free_list(list_t *head)
{
	if (!head)
		return;
	if (head->next)
		free_list(head->next);
	free(head->str);
	free(head);
}
