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
	unsigned int i = 0;
	listint_t *cr_node, *pv_node, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	cr_node = *head;
	pv_node = cr_node;
	while ((cr_node != NULL) && (i <= idx))
	{
		pv_node = cr_node;
		if (i == idx)
		{
			pv_node->next = new_node;
			new_node->next = cr_node;
			return (new_node);
		}
		cr_node = cr_node->next;
		++i;
	}
	if (i == idx)
	{
		pv_node->next = new_node;
		new_node->next = cr_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
