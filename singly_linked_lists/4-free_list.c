#include "lists.h"

/**
 * free_list - free a list
 *
 * @head: pointer
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *listita;

	while (head != NULL)
	{
		listita = head;
		head = head->next;
		free(listita->str);
		free(listita);
	}
	head = NULL;
}
