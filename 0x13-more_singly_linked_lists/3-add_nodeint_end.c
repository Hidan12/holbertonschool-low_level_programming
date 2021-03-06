#include "lists.h"
/**
 * add_nodeint_end - add node
 * @head: node.
 * @n: add to new node
 * Return: node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *nodo;

	nodo = malloc(sizeof(listint_t));
	if (!nodo)
	{
		return (NULL);
	}
	nodo->n = n;
	nodo->next = NULL;

	if (!*head)
		*head = nodo;
	else
	{
		temp = *head;
		for (; temp->next; temp = temp->next)
			continue;
		temp->next = nodo;
	}
	return (temp);
}
