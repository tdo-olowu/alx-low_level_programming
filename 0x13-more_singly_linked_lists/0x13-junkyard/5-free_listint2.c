#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a listint_t list
 * @head: the address of the head of the list.
 * Return: none.
 */
void free_listint2(listint_t **head)
{
	listint_t *prev_node, *current_node;

	prev_node = *head;
	while (prev_node != NULL)
	{
		current_node = prev_node->next;
		free(prev_node);
		prev_node = current_node;
	}
	*head = NULL;
}
