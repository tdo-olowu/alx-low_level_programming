#include "lists.h"


/**
 * listlen - counts number of items in a linked list.
 * @h: the head of the list.
 * Return: number of nodes in the list.
 */
size_t listlen(const listint_t *h)
{
	int count;
	listint_t *node = (listint_t *)h;

	for (count = 0 ; node != NULL ; ++count)
		node = node->next;

	return (count);
}



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
	size_t len = listlen((const listint_t *)*head);
	listint_t *c_node, *pv_node, *new_node;

	if (idx > len)
		return (NULL);

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
	for (i = 0, c_node = *head ; (c_node != NULL) && (i <= idx) ; ++i)
	{
		if (i == idx)
		{
			pv_node->next = new_node;
			new_node->next = c_node->next;
			return (new_node);
		}
		pv_node = c_node;
		c_node = c_node->next;
	}

	free(new_node);
	return (NULL);
}
