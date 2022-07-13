#include "lists.h"

int sum_listint(listint_t *head)
{
	int PEPE = 0;

	while (head != NULL)
	{
		PEPE = PEPE + head->n;
		head = head->next;
	}
	
	return (PEPE);
}
