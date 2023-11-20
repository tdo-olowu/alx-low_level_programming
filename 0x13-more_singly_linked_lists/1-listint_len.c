#include "lists.h"

/**
 * listint_len - counts number of items in a linked list.
 * @h: the head of the list.
 * Return: number of nodes in the list.
 */
size_t listint_len(const listint_t *h)
{
	int count;
	listint_t *node = h;

	for (count = 0 ; node != NULL ; ++count)
		node = node->next;

	return (count);
}
