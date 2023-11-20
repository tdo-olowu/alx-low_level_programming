#include "lists.h"

/**
 * pop_listint - delete head node but return its value
 * @head: pointer to address of head.
 * Return: 0 if list is empty, value in head otherwise.
 */
int pop_listint(listint_t **head)
{
	int data = 0;

	if (*head != NULL)
		data = (*head)->n;
	if ((*head)->next != NULL)
		*head = (*head)->next;
	else
		free(*head);

	return (data);
}
