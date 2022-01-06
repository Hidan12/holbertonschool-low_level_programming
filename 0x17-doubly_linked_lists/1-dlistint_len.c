#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - count the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *f;
	size_t count = 0;

	f = h;
	if (f != NULL)
	{
		for (; f != NULL; count++)
			f = f->next;
	}
	return (count);
}
