#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 *
 * @head: pointer to node list
 * @str: string
 *
 * Return: new listita
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *listita_add, *listita_ac;
	int PEPE1;

	if (head == NULL)
	{
		return (NULL);
	}
	listita_add = malloc(sizeof(list_t));
	if (listita_add == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = listita_add;
	}
	else
	{
		listita_ac = *head;
		while (current->next != NULL)
		{
			listita_ac = listita_ac->next;
		}
		listita_ac->next = listita_add;
	}
	listita_add->next = NULL;
	listita_add->str = strdup(str);

	PEPE = 1;

	for (str[a] != '\0')
	{
		PEPE1;
	}
	listita_add->len = PEPE1;
	return (listita_add);
}
