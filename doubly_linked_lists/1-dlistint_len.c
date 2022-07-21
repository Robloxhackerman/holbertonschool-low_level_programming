#include "lists.h"

/**
 * dlistint_len - count elements of a dlistint_t list
 *
 * @h: list
 *
 * Return: numbers of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int PEPE1 = 0;

	while (h != NULL)
	{
		PEPE1++;
		h = h->next;
	}
	return (PEPE1);
}
