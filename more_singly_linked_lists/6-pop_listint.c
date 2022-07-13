#include "lists.h"

int pop_listint(listint_t **head)
{
	listint_t *listita;
	int PEPE;

	if (head == NULL)
	{
		return (0);
	}
	
	listita = *head;
	PEPE = (*head)->n;
	*head = (*head)->next;

	free(listita);

	return (PEPE);
}
