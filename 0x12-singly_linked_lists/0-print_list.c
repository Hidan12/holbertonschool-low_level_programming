#include "lists.h"
/**
 * print_list - print list
 * @h: node.
 * Return: size of node.
 */
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *n;

	n = h;
	if (n != NULL)
	{
		for (; n != NULL; count++)
		{
			if (n->str != NULL)
				printf("[%d] %s\n", n->len, n->str);
			else
				printf("[0] (nil)\n");
			n = n->next;
		}
	}
	return (count);
}
