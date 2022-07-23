#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *PEPOCTUAL = NULL, *PEPODO = NULL;
	unsigned int PEPERGO = dlistint_len(*head);

	if (head && *head)
	{
		if (index > PEPERGO)
		{
			return (-1);
		}
		if (index == 0)
		{
			PEPODO = PEPOCTUAL;
			
			if (PEPOCTUAL->next)
			{
				 PEPOCTUAL = PEPOCTUAL->next;
				 PEPOCTUAL->prev = PEPODO->prev;
				 *head = PEPOCTUAL;
			}
			else
			{
				*head = NULL;
			}
			free(PEPODO);
			return (1);
		}
		PEPOCTUAL = get_dnodeint_at_index(*head, index);

		if (PEPOCTUAL)
		{
			PEPODO = PEPOCTUAL;
			if (PEPERGO == index)
			{
				PEPOCTUAL->prev->next = PEPOCTUAL->next;
			}
			else
			{
				PEPOCTUAL->prev->next = PEPOCTUAL->next;
				PEPOCTUAL->next->prev = PEPOCTUAL->prev;
			}

			free(PEPODO);
			return (1);
		}
	}
	return (-1);
}

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
			if (index == PEPE1)
			{
				return (PEPOCTUAL);
			}

			PEPOCTUAL = PEPOCTUAL->next;
			PEPE1++;
		}
	}

	return (NULL);

}
