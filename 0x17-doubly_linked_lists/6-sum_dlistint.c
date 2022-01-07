#include "lists.h"
/**
 *  sum_dlistint - som the element
 * @head: pointer to the start of the linked list
 *
 * Return: node
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *f = head;
	int sum = 0;

	if (f != NULL)
	{
		for (; f != NULL; sum += f->n)
		{
			f = f->next;
			if (f == NULL)
				break;
		}
		return (sum);
	}
	return (0);
}
