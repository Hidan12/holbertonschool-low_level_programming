#include "lists.h"
/**
 * print_listint - print list
 * @h: node.
 * Return: size of node.
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;
	const listint_t *nodo;

	nodo = h;
	for (; nodo != NULL; count++)
	{
		printf("%d\n", nodo->n);
		nodo = nodo->next;
	}
	return (count);
}
