#include "lists.h"

/**
 * add_nodeint_end - append a new node to the list.
 * @head: pointer to the address of the head.
 * @n: the number the new node should store.
 * Return: address of the new node.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_t;
	listint_t *current_node;

	new_t = malloc(sizeof(listint_t));
	if (new_t == NULL)
		return (NULL);

	new_t->n = n;
	current_node = *head;
	if (current_node == NULL)
		return (new_t);
	while (current_node->next != NULL)
		current_node = current_node->next;
	current_node->next = new_t;
	new_t->next = NULL;

	return (new_t);
}
