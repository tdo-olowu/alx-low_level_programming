#include "lists.h"

/**
 * insert_nodeint_at_index - insert a node at specified index.
 * @head: pointer to head
 * @idx: the index to check.
 * @n: the value the node should store
 * Return: index or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *c_node, *pv_node, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = NULL;
		return (new_node);
	}
	if ((*head == NULL) && (idx > 0))
	{
		free(new_node);
		return (NULL);
	}
	for (i = 0, c_node = *head ; (c_node != NULL) && (i <= idx) ; ++i)
	{
		if (i == idx)
		{
			pv_node->next = new_node;
			new_node->next = c_node;
			return (new_node);
		}
		pv_node = c_node;
		c_node = c_node->next;
	}
	if (i == idx)
	{
		pv_node->next = new_node;
		new_node->next = NULL;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
