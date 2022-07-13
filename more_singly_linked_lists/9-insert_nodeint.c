#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node node
 *
 * @head: pointer to list
 * @idx: index
 * @n: vlues
 *
 * Return: address of new node or null if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *listita_P1, *listita_P2;
	unsigned int PEPE1;

	listita_P1 = malloc(sizeof(listint_t));

	if (listita_P1 == NULL)
	{
		return (NULL);
	}

	listita_P1->n = n;
	listita_P2 = *head;

	if (idx == 0)
	{
		listita_P1->next = listita_P2;
		*head = listita_P1;
		return (listita_P1);
	}

	for (PEPE1 = 0; (idx - 1) > PEPE1; PEPE1++)
	{
		if (listita_P2 == NULL || listita_P2->next == NULL)
		{
			return (NULL);
		}

		listita_P2 = listita_P2->next; 
	}

	listita_P1->next = listita_P2->next;
	listita_P2->next = listita_P1;

	return (listita_P1);
}
