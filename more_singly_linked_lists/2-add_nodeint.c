#include "lists.h"

/**
 * add_nodeint - adds nodes
 *
 * @head: pointer
 * @n: elements to add
 *
 * Return: pointer
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *listita;
	unsigned int PEPE1;

	PEPE1 = n;

	listita = malloc(sizeof(listint_t));

	if (!listita)
	{
		return (NULL);
	}

	listita->n = PEPE1;
	listita->next = (*head);
	(*head) = listita;

	return (*head);
}
