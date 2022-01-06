#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - print all the elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *f;
	size_t count = 0;

	f = h;
	if (f != NULL)
	{
		for (; f != NULL; count++)
		{
			printf("%d\n", f->n);
			f = f->next;
		}
	}
	return (count);
}
