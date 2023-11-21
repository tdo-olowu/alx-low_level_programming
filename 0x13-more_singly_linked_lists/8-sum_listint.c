#include "lists.h"

/**
 * sum_listint - add up the values in a list
 * @head: head of list
 * Return: 0 if list is empty, sum otherwise.
 */
int sum_listint(listint_t *head)
{
	int acc;
	listint_t *node = head;

	acc = 0;
	while (node != NULL)
	{
		acc += node->n;
		node = node->next;
	}

	return (acc);
}
