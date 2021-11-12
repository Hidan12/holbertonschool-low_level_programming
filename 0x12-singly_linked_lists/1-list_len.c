#include "lists.h"
/**
 * list_len - len list
 * @h: node.
 * Return: size of node.
 */
size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *n;

	n = h;
	if (n != NULL)
	{
		for (; n != NULL; count++)
		{
			n = n->next;
		}
	}
	return (count);
}
