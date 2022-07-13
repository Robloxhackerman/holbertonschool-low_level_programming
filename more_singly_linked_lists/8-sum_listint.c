#include "lists.h"

int sum_listint(listint_t *head)
{
	int PEPE;

	while (head != NULL)
	{
		PEPE = head->n;
		head = head->next;
	}
	
	return (PEPE);
}
