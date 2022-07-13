#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 *
 * @h: pointer
 *
 * Return: elements
 */
size_t print_listint(const listint_t *h)
{
	size_t  PEPE1 = 0;

	while (h)
	{
		PEPE1++;
		printf("%d\n", h->n);
		h = h->next;
	}
	
	return (PEPE1);
}
