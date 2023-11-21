#include "lists.h"

/**
 * pop_listint - delete head node but return its value
 * @head: pointer to address of head.
 * Return: 0 if list is empty, value in head otherwise.
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp = *head;

	if (temp != NULL)
	{
		data = temp->n;
		if (temp->next != NULL)
		{
			*head = (*head)->next;
			free(temp);
		}
		else
			free(temp);
	}

	return (data);
}
