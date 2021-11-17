#include "lists.h"
/**
 * sum_listint - sarch the node
 * @head: node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	for (; head;)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
