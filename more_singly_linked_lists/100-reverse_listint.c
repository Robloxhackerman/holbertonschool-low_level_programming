#include "lists.h"

listint_t *reverse_listint(listint_t **head)
{
	listint_t *listita_P1, *listita_P2;

	if (*head == NULL)
	{
		return (NULL);
	}

	if ((*head)->next == NULL)
	{
		return (*head);
	}

	listita_P1 = *head;
	*head = NULL;

	while (listita_P1 != NULL)
	{
		listita_P2 = listita_P1->next;
		listita_P1->next = *head;
		*head = listita_P1;
		listita_P1 = listita_P2;
	}

	return (*head);
}
