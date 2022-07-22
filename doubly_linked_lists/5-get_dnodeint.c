#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: list
 * @index: index
 *
 * Return: node, or NULL if fails
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *PEPOCTUAL = head;
	unsigned int PEPE1 = 0;

	if (head)
	{
		while (PEPOCTUAL != NULL)
		{
			if (PEPE1 == index)
			{
				return (PEPOCTUAL);
			}

			PEPOCTUAL = PEPOCTUAL->next;
			PEPE1++;
		}
	}

	return (NULL);

}
