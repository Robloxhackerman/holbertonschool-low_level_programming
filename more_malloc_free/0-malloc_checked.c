#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: size of memory
 *
 * Return: if malloc fails, return 98
 */
void *malloc_checked(unsigned int b)
{
	void *PEPE;

	PEPE = malloc(b);

	if (PEPE == 0)
	{
		exit(98);
	}

	return (PEPE);
}
