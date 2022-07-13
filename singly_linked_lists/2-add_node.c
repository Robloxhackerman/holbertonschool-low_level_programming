#include "lists.h"

/**
 * add_note - adds new node
 *
 * @head: pointer
 * @str: styring
 *
 * Return: new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *listita;
	unsigned int PEPE1 = 0;

	while (str[PEPE1])
	{
		PEPE1++;
	}

	listita = malloc(sizeof(list_t));
	if (!listita)
	{
		return (NULL);
	}

	listita->str = strdup(str);
	listita->len = PEPE1;
	listita->next = (*head);
	(*head) = listita;

	return (*head);
}
