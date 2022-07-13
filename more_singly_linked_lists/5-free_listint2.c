#include "lists.h"

/**
 * free_listint - frees a list
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
	while (head != NULL)
	{
		listita = (*head)->next;
		free(*head);
		*head = listita;
	}
	head = NULL;
}
