#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: list
 *
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *PEPOCTUAL = head, *PEPOROXIMO = NULL;

	while (PEPOCTUAL != NULL)
	{
		PEPOROXIMO = PEPOCTUAL->next;
		free(PEPOCTUAL);
		PEPOCTUAL = PEPOROXIMO;
	}
}
