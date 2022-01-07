#include "lists.h"
/**
 * free_list - free list
 * @head: node.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	if (head == NULL)
		return;

	while (head)
	{
		node = (head)->next;
		free(head);
		head = node;
	}
	head = NULL;
}
