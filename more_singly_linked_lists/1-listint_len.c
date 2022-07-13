#include "lists.h"

/**
 * listnt_len - prints amount of elements
 *
 * @h: list
 *
 * Return: num of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t PEPE1 = 0;

	while (h)
	{
		PEPE1++;
		h = h->next;
	}

	return (PEPE1);
}
