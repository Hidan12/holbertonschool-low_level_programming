#include "lists.h"
/**
 * print_list - print list
 * @h: node.
 * Return: size of node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	const list_t *n;

	n = h;
	if (n != NULL)
	{
		for (; n != NULL; count++)
			n = n->next;
	}
	return (count);
}
