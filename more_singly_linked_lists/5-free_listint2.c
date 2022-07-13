#include "lists.h"

/**
 * free_listint2 - frees a list
 *
 * @head: pointer to list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *listita;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		listita = (*head);
		*head = (*head)->next;
		free(listita);
	}
	head = NULL;
}
