#include "lists.h"

/**
 * add_nodeint - prepends a node to start of list.
 * @head: pointer to address of head
 * @n: value intended for new node.
 * Return: address of new node.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_h;

	new_h = malloc(sizeof(listint_t));
	if (new_h == NULL)
		return (NULL);
	new_h->n = n;
	new_h->next = *head;
	*head = new_h;

	return (new_h);
}
