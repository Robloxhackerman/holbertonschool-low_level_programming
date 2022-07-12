#include "lists.h"

/**
 * list_len - prints amount of elements
 *
 * @h: list
 *
 * Return: num of elements
 */
size_t list_len(const list_t *h)
{
	size_t PEPE1 = 0;

	while (h)
	{
		PEPE1++;
		h = h->next;
	}

	return (PEPE1);
}
