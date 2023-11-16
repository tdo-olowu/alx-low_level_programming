#include "lists.h"

/**
 * add_node - adds a bew bide at vefubbubg if a list_t list.
 * @head: pointer to the address of original head.
 * @str: the string for the node
 * 'prepend_node' would have been a better name.
 *
 * Return: the address of new head. NULL if failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *prenode;

	prenode = malloc(sizeof(list_t));
	if (prenode == NULL)
		return (NULL);

	prenode->str = strdup(str);
	if (prenode->str == NULL)
	{
		free(prenode);
		return (NULL);
	}
	prenode->len = strlen(str);
	prenode->next = *head;

	return (prenode);
}
