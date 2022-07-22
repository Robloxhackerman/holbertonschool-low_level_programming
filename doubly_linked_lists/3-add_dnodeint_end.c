#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 *
 * @head: list
 * @n: caontent
 *
 * Return: address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *PEPODO;

	PEPODO = malloc(sizeof(dlistint_t));

	if (PEPODO == NULL)
	{
		return (NULL);
	}

	PEPODO->n = n;

	if (*head)
	{
		PEPODO->next = *head;
		PEPODO->prev = (*head)->prev;
		(*head)->prev = PEPODO;
		*head = PEPODO;

		return (*head);
	}
	PEPODO->next = *head;
	PEPODO->prev = NULL;
	*head = PEPODO;
	return (*head);
}
