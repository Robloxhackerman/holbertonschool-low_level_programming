#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 *
 * @ptr: pointer
 * @old_size: old memory
 * @new_size: new memory
 *
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int PEPE1;
	char *PEPE_N;
	char *PEPE_O;

	PEPE_O = ptr;

	if (old_size == new_size)
	{
		return (ptr);
	}

	if (ptr == 0)
	{
		PEPE_N = malloc(sizeof(char) * new_size);
		return (PEPE_N);
	}

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (NULL);
	}

	PEPE_N = malloc(sizeof(char) * new_size);

	if (PEPE_N == 0)
	{
		return (NULL);
	}

	if (new_size < old_size)
	{
		for (PEPE1 = 0; new_size > PEPE1; PEPE1++)
		{
			PEPE_N[PEPE1] = PEPE_O[PEPE1];
		}
		return (PEPE_N);
	}
	
	free(ptr);
	return (PEPE_N);
}
