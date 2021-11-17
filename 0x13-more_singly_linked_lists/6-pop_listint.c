#include "lists.h"
/**
 * pop_listint - function with one argument
 * @head: pointer to head pointer of list
 * Return: delete element
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *nodo;

	if (*head)
	{
		n = (*head)->n;
		nodo = (*head)->next;
		free(*head);
		*head = nodo;
	}
	else
		n = 0;
	return (n);
}
