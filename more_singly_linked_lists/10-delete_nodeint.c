#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of a list
 *
 * @head: pointer a list
 * @index: indexo of node
 *
 * Return: 1 good, -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *listita_P1, *listita_P2;
	unsigned int PEPE1;

	listita_P1 = *head;

	if (listita_P1 == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(listita_P1);
		return (1);
	}

	for (PEPE1 = 0; (index - 1) > PEPE1; PEPE1++)
	{
		if (listita_P1->next == NULL)
		{
			return (-1);
		}

		listita_P1 = listita_P1->next;
	}

	listita_P2 = listita_P1->next;
	listita_P1->next = listita_P2->next;
	free(listita_P2);

	return (1);
}
