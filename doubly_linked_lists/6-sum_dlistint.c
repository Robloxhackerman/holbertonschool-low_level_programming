#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 *
 * @head: list
 * @index: index
 *
 * Return: node, or NULL if fails
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *PEPOCTUAL = head;
	int PEPE1 = 0;

	if (head)
	{
		while (PEPOCTUAL != NULL)
		{
			PEPE = PEPE + PEPOCTUAL->n;
			PEPOCTUAL = PEPOCTUAL->next;
		}
	}

	return (NULL);

}
