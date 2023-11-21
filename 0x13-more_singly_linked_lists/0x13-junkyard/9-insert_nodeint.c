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
	unsigned int ind = 0;
	listint_t *cr_node, *pv_node, *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (*head != NULL)
	{
		cr_node = *head;
		while ((cr_node->next != NULL) && (ind <= idx))
		{
			pv_node = cr_node;
			if (ind == idx)
			{
				pv_node.next = new_node;
				new_node.next = cr_node;
				return (new_node);
			}
			cr_node = cr_node.next;
			++ind;
		}
		if (ind == idx)
		{
			pv_node.next = new_node;
			new_node.next = cr_node;
			return (new_node);
		}
		if (ind == idx - 1)
		{
			cr_node.next = new_node;
			new_node.next = NULL;
			return (new_node);
		}
		/* return (new_node); */
		else
		{
			free(new_node);
			return (NULL);
		}
	}
	else if ((*head == NULL) && (idx == 0))
	{
		new_node.next = NULL;
		return (new_node);
	}
}

