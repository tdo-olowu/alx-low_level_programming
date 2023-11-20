#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a linked list.
 * @h: address of the head of the list
 * Return: number of items in the list.
 */
size_t print_listint(const listint_t *h)
{
	int count;
	listint_t *node = h;

	for (count = 0 ; node != NULL ; ++count)
	{
		printf("%d\n", node->n);
		node = node->next;
	}

	return (count);
}
