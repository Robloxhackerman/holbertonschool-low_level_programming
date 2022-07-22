#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 *
 * @head: list
 * @n: caontent
 *
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *PEPODO, *PEPOCTUAL;

	PEPODO = malloc(sizeof(dlistint_t));

	if (PEPODO == NULL)
	{
		return (NULL);
	}

	PEPODO->n = n;

	if (*head)
	
	{
		PEPOCTUAL = *head;

		while(PEPOCTUAL->next != NULL)
		{
			PEPOCTUAL = PEPOCTUAL->next;
		}

		PEPODO->next = NULL;
		PEPODO->prev = PEPOCTUAL;
		PEPOCTUAL->next = PEPODO;

		return (*head);
	}
	
	PEPODO->next = *head;
	PEPODO->prev = NULL;
	*head = PEPODO;
	return (*head);
}
