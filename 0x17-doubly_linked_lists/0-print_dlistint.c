#include "lists.h"

/**
 * print_dlistint - prints items in a doubly-linked list
 * left counts from current node leftward.
 * @dlistint_t: head of dlist...or is it?
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count_left = 0;
	size_t count_right = 0;
	char *fmt = "%lu\n";
	const dlistint_t *node_left, *node_right;

	if (h == NULL)
		return 0;

	node_left = h;
	if (node_left->next != NULL)
		node_right = node_left->next;
	else
		node_right = NULL;

	while (node_left != NULL)
	{
		printf(fmt, node_left->n);
		count_left += 1;
		node_left = node_left->prev;
	}
	while (node_right != NULL)
	{
		printf(fmt, node_right->n);
		count_right += 1;
		node_right = node_right->next;
	}

	return (count_left + count_right);
}
