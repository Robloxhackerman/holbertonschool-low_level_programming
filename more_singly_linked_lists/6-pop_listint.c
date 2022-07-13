#include "lists.h"

/**
 * pop_listint - coso
 *
 * @head: pointer to list
 *
 * Return: value of n
 */
int pop_listint(listint_t **head)
{
	listint_t *listita;
	int PEPE;

	if (*head == NULL)
	{
		return (0);
	}

	listita = *head;
	PEPE = (*head)->n;
	*head = (*head)->next;

	free(listita);

	return (PEPE);
}
