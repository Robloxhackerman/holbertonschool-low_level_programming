#include "lists.h"

/**
 * free_listint - frees a list
 *
 * @head: pointer to list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *listita;

	while (head != NULL)
	{
		listita = head;
		head = head->next;
		free(listita);
	}
	head = NULL;
}
