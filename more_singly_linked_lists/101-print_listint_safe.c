#include "lists.h"

size_t print_listint_safe(const listint_t *head)
{
	size_t PEPE1 = 0;
	long int PEPE2;

	while (head)
	{
		PEPE1++;
		PEPE2 = head - head->next;

		printf("[%p] %d\n", (void *)head, head->n);

		if (PEPE2 < 0)
		{
			head = head->next;
		}
		else
		{
			printf("[%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}

	return (PEPE1);
}
