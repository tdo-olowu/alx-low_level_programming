#include "lists.h"

/**
 * add_node_end - appends a node to the end of a list_t linked list
 * @head: pointer to the address of the head.
 * @str: the string for the new node.
 * Return: address of new tail, NULL if failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_tail = NULL;
	list_t *current_node;
	char *nodestr = strdup(str);

	if (nodestr == NULL)
		return (NULL);
	else if (*head == NULL)
	{
		free(nodestr);
		return (NULL);
	}
	new_tail->str = nodestr;
	new_tail->len = strlen(str);

	current_node = *head;
	while (current_node->next != NULL)
		current_node = current_node->next;

	current_node->next = new_tail;
	new_tail->next = NULL;

	return (new_tail);
}
