#include "lists.h"

/**
 * free_list - get it while offer lasts!
 * @head: pointer to the address of the list's head.
 * Return: no return, just free memory occupied by the linkedlist.
 */
void free_list(list_t *head)
{
	list_t *temp = *head;
	list_t *prev_node = NULL;

	while ((temp != NULL) && (temp->next != NULL))
	{
		free(temp->str);
		prev_node = temp;
		temp = temp->next;
		free(prev_node);
	}
	free(temp->str);
	free(temp);
}
