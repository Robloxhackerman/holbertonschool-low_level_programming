#include "lists.h"

/**
 * insert_dnodeint_at_index - adds a new node at the index of a dlistint_t list
 *
 * @h: list
 * @idx: index
 * @n: content
 *
 * Return: address or null if fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *PEPODO = malloc(sizeof(dlistint_t)), *PEPOCTUAL = NULL;
	unsigned int PEPERGO = dlistint_len(*h), PEPE1 = 0;

	if (PEPODO == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	else if (idx == PEPERGO)
	{
		return (add_dnodeint_end(h, n));
	}

	PEPOCTUAL = *h;

	while (PEPOCTUAL != NULL)
	{
		if (idx == PEPE1)
		{
			PEPODO->n = n;
			PEPODO->next = PEPOCTUAL;
			PEPODO->prev = PEPOCTUAL->prev;
			PEPOCTUAL->prev = PEPODO;
			PEPOCTUAL = PEPODO;
			PEPOCTUAL->prev->next = PEPODO;
			return (PEPODO);
		}

		PEPOCTUAL = PEPOCTUAL->next;
		PEPE1++;
	}

	return (PEPOCTUAL);
}

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
