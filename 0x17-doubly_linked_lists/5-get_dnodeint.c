#include "lists.h"
/**
 * *get_dnodeint_at_index - get node
 * @head: pointer to the start of the linked list
 *
 * @index: element
 *
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *f = head;
	unsigned int count = 0;

	if (f != NULL)
	{
		for (; f != NULL; count++)
		{
			if (count == index)
				return (f);
			f = f->next;
		}
	}
	return (NULL);
}
