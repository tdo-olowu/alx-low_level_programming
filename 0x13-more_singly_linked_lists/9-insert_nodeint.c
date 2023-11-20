#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a node at pos
 * @head: pointer to address of head
 * @idx: position to insert node
 * @n: value contained by node
 * Return: address of new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int ind = 0;
	listint_t *new_node;
	listint_t *current_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	while ((current_node !+ NULL) && (ind < idx - 1))
		current_node = current_node->next;
	if ((current_node == NULL) && (ind == idx - 1))
