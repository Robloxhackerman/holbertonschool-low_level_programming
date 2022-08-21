#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *tablita;
	hash_node_t **arreglito;
	unsigned long int PEPE1;

	tablita = malloc(sizeof(hash_table_t));
	arreglito = malloc(sizeof(hash_node_t *) * size);

	if (tablita == NULL)
	{
		return (NULL);
	}
	if (arreglito == NULL)
	{
		return (NULL);
	}
	for (PEPE1 = 0; size > PEPE1; PEPE1++)
	{
		arreglito[PEPE1] = NULL;
	}
	
	tablita->size = size;
	tablita->array = arreglito;

	return (tablita);
}
