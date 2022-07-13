#include "lists.h"

void free_listint(listint_t *head)
{
	listint_t *listita;

	while (head != NULL)
	{
		listita = head;
		head = head->next;
		free(listita);
		head = listita;
	}
	head = NULL;
}
