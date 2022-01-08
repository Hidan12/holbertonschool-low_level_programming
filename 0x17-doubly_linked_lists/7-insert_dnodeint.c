#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: dlistint_t list to insert node into
 * @idx: index to insert node at
 * @n: value of n for the node to be inserted
 * Return: the address of the new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *f = *h, *new;
	unsigned int count = 0;

	if (f != NULL)
	{
		if (idx == 0)
			return (add_dnodeint(h, n));
		new = malloc(sizeof(dlistint_t));
		if (new == NULL)
			return (NULL);
		for (; f != NULL; f = f->next, count++)
		{
			if ((count + 1) == idx)
			{
				if (f->next->next == NULL)
					return (add_dnodeint_end(h, n));
				new->n = n;
				new->prev = f->next;
				new->next = f->next->next;
				f->next = new;
				return (f);

			}
		}
	}
	return (NULL);
}
