#include "lists.h"
/**
 * free_list - free list
 * @head: node.
 */
void free_list(list_t *head)
{
	list_t *node;

	while(head)
	{
		node = head;
		free(node->str);
		free(node);
		head = node->next;
	}
}
