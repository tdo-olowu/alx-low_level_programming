#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a listint_t list
 * @head: the address of the head of the list.
 * Return: none.
 */
void free_listint(listint_t *head)
{
	listint_t *prev_node, *current_node;

	prev_node = head;
	if (prev_node != NULL)
	{
		while (prev_node->next != NULL)
		{
			current_node = prev_node->next;
			free(prev_node);
			prev_node = current_node;
		}
		free(prev_node);
		*head = NULL;
	}
}
