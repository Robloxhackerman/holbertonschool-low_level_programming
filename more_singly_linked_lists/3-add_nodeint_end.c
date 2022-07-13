listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *listita_add, *listita_ac;

	if (head == NULL)
	{
		return (NULL);
	}
	
	listita_add = malloc(sizeof(listint_t));
	
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
		
		while (listita_ac->next != NULL)
		{
			listita_ac = listita_ac->next;
		}
		
		listita_ac->next = listita_add;
	}
	listita_add->next = NULL;
	listita_add->n = n;
	return (listita_add);
}
