#include "lists.h"
/**
 * listint_len - measure size of node
 * @h: node.
 * Return: size of node.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *nodo;

	nodo = h;
	for (; nodo != NULL; count++)
		nodo = nodo->next;
	return (count);
}
