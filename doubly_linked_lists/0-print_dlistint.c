#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: list
 *
 * Return: numbers of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int PEPE1 = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		PEPE1++;
		h = h->next;
	}
	return (PEPE1);
}
