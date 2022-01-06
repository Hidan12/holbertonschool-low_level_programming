#include <stdio.h>
#include "lists.h"
/**
 * *add_dnodeint - add node
 * @head: pointer to the start of the linked list
 *
 * @n: element
 *
 * Return: nodes
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *f;

	if (head == NULL)
		return (NULL);
	f = malloc(sizeof(dlistint_t));
	if (f == NULL)
		return (NULL);
	f->n = n;
	f->prev = NULL;
	f->next = *head;
	*head = f;
	if (f->next != NULL)
		(f->next)->prev = f;
	return (f);
}
