#include <stdio.h>
#include "lists.h"
/**
 * *add_dnodeint_end - add node
 * @head: pointer to end of the linked list
 *
 * @n: element
 *
 * Return: nodes
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *f, *tmp;

	if (head == NULL)
		return (NULL);
	f = malloc(sizeof(dlistint_t));
	if (f == NULL)
		return (NULL);
	f->n = n;
	f->next = NULL;
	if (!*head)
	{
		f->prev = NULL;
		*head = f;
		return (f);
	}
	tmp = *head;
	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = f;
	f->prev = tmp;
	return (f);
}
