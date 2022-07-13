#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t  PEPE1;

	while (h)
	{
		PEPE1++;
		printf("%d\n", h->n);
		h = h->next;
	}
	
	return (PEPE1)
}
