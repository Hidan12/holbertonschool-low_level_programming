#include "lists.h"
/**
 * add_node - add node
 * @head: node.
 * @str: add to node
 * Return: node.
 */
list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *n;

	if (str != NULL)
	{
		for (; str[count]; count++)
			continue;
	n = malloc(sizeof(list_t));
	if (!n)
	{
		free(n);
		return(NULL);
	}
	n->str = strdup(str);
	n->len = count;
	n->next = *head;
	*head = n;
	}

	return (*head);
}
