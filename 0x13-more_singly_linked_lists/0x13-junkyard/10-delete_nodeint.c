#include "lists.h"

/**
 * delete_nodeint_at_index - delete node.
 * @head: ptr to head
 * @index: where to delete.
 * Return: 1 for success, -1 for failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *c_node;
	listint_t *p_node;

	if (*head == NULL)
		return (-1);
	if ((*head)->next == NULL)
	{
		free(*head);
		return (1);
	}
	for (i = 0, c_node = *head ; (c_node != NULL) && (i <= index) ; ++i)
	{
		if (i == index)
		{
			p_node->next = c_node->next;
			free(c_node);
			return (1);
		}
		p_node = c_node;
		c_node = c_node->next;
	}
	return (-1);
}
