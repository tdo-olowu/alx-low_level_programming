#include "lists.h"

/**
 * delete_dnodeint_at_index - remove a link from the dll.
 * @head: address of head of linked list.
 * index: what to delete.
 * Return: 1 for success, -1 for failure.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	int success = 1;
	int failure = -1;
	unsigned int i;
	dlistint_t *prev_node, *crnt_node, *next_node;

	if (head == NULL)
		return (failure);
	else if (*head == NULL)
		return (success);
	else
	{
		crnt_node = *head;
		while (crnt_node->prev != NULL)
			crnt_node = crnt_node->prev;
		prev_node = crnt_node->prev;
		next_node = crnt_node->next;
		for (i = 0 ; crnt_node != NULL ; ++i)
		{
			if (i == index)
			{
				free(crnt_node);
				if (prev_node != NULL)
					prev_node->next = next_node;
				if (next_node != NULL)
					next_node->prev = prev_node;
				return (success);
			}
			prev_node = crnt_node;
			crnt_node = next_node;
			if (next_node != NULL)
				next_node = crnt_node->next;
		}
	}

	return (failure);
}
