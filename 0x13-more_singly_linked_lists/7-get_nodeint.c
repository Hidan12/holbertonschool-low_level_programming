#include "lists.h"
/**
 * get_nodeint_at_index - sarch the node
 * @head: node
 * @index: node position
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nodo;
	unsigned int count = 0;

	nodo = head;
	for (; nodo; count++)
	{
		if (count == index)
			return (nodo);
		nodo = head->next;
	}
	return (NULL);
}
