#include "lists.h"
/**
 * free_listint - free head
 * @head: pointer to head pointer of list
 */
void free_listint(listint_t *head)
{
	listint_t *nodo;

	while (head)
	{
		nodo = head->next;
		free(head);
		head = nodo;
	}
}
