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
	if (!node)
	{
		free(n);
		return(NULL);
	}
	nodo->str = strdup(str);
	nodo->len = count;
	nodo->next = *head;
	*head = nodo;
	}

	return (*head);
}
