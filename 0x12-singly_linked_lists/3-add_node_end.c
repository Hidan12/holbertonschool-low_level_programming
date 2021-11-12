#include "lists.h"
/**
 * add_node_end - add node in last
 * @head: node.
 * @str: add str.
 * Return: size of node.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *cre_n, *n;

	if (str != NULL)
	{
		for (; str[count]; count++)
			continue;
	cre_n = malloc(sizeof(list_t));
	if (!cre_n)
	{
		free(cre_n);
		return (NULL);
	}
	cre_n->str = strdup(str);
	cre_n->len = count;
	cre_n->next = NULL;
	}
	if (*head == NULL)
	{
		*head = cre_n;
	}

	else
	{
		n = *head;
		for (; n->next; n = n->next)
			continue;
		 n->next = cre_n;
	}

	return (*head);
}
