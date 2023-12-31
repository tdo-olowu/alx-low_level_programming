#include "lists.h"


/**
 * listlen2 - counts number of items in a linked list.
 * @h: the head of the list.
 * Return: number of nodes in the list.
 */
size_t listlen2(const listint_t *h)
{
	int count;
	listint_t *node = (listint_t *)h;

	for (count = 0 ; node != NULL ; ++count)
		node = node->next;

	return (count);
}




/**
 * delete_nodeint_at_index - delete node.
 * @head: ptr to head
 * @index: where to delete.
 * Return: 1 for success, -1 for failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	size_t len = listlen2((const listint_t *)*head);
	listint_t *c_node, *p_node;

	if (index > len)
		return (-1);
	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		c_node = *head;
		*head = (*head)->next;
		free(c_node);
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

	free(*head);
	return (-1);
}
