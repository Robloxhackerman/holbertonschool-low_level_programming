#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *PEPODO;
	int PEPE1;

	if (ht == NULL)
	{
		return;
	}

	for (PEPE1 = 0; ht->size > PEPE1; PEPE1++)
	{
		PEPODO = ht->array[PEPE1];

		while (PEPODO != NULL)
		{
			printf("'%s': '%s'", PEPODO->key, PEPODO->value);

			PEPODO = PEPODO->next;
		}
	}
}
