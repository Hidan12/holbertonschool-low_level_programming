#include "lists.h"
/**
 * free_listint2 - function with one argument
 * @head: pointer to head pointer of list
 */
void free_listint2(listint_t **head)
{
	listint_t *nodo;

	if (head == NULL)
		return;

	while (*head)
	{
		nodo = (*head)->next;
		free(*head);
		*head = nodo;
	}
	*head = NULL;
}
