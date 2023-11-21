#include "lists.h"

/**
 * get_nodeint_at_index - get the node at specified index.
 * @head: pointer to head
 * @index: the index to check.
 * Return: index or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int ind;
	listint_t *curr_node;

	if (head == NULL)
		return (NULL);

	curr_node = head;
	ind = 0;
	while ((curr_node->next != NULL) && (ind <= index))
	{
		if (ind == index)
			return (curr_node);
		curr_node = curr_node->next;
		++ind;
	}
	if (ind == index)
		return (curr_node);

	return (NULL);
}
