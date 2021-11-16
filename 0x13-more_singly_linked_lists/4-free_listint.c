#include "lists.h"
void free_listint(listint_t *head)
{
	listint_t *nodo;

	while(head)
	{
		nodo = head->next;
		free(head);
		head = nodo;
	}
}
