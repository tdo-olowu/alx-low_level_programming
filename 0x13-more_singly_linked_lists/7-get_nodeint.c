#include "lists.h"

/**
 * get_nodeint_at_index - get the node at specified index.
 * @head: pointer to head
 * @index: the index to check.
 * Return: index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int ind;
	listint_t *current_node;

	ind = 0;
	current_node = head;
	while ((current_node != NULL) && (ind < index))
		current_node = current_node->next;

	return (current_node);
}
