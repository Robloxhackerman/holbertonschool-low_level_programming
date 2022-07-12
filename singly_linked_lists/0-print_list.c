#include "lists.h"

/**
 * print_list - prints all the elements of a list
 *
 * @h: list
 *
 * Return: elements
 */
size_t print_list(const list_t *h)
{
	size_t PEPE1 = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		
		h = h->next;
		PEPE1++;
	}

	return (PEPE1);
}
