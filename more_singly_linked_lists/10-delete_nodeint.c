#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *listita_P1, *listita_P2;
	unsigned int PEPE1;

	listita_P1 = malloc(sizeof(listint_t));

	if (listita_P1 == NULL)
	{
		return ();
	}

	listita_P1->n = n;
	listita_P2 = *head;
	
	if (idx == 0)
	{
		listita_P1->next = listita_P2;
		*head = listita_P1;
		return (listita_P1);
	}

	for (PEPE1 = 0; idx > PEPE1; PEPE1++)
	{
		if (listita_P2 == NULL || listita_P2->next == NULL)
		{
			return (NULL);
		}
		
		listita_P2 = listita_P2->next; 
	}
	
	listita_P1->next = listita_P2->next;
	listita_P2->next = listita_P1;

	return (listita_P1);
}
