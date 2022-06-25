#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b:
 *
 * Return:
 */
void *malloc_checked(unsigned int b)
{
	void *PEPE;

	PEPE = malloc(sizeof(int) * b);

	if (PEPE == 0)
	{
		exit(98);
	}

	return (PEPE);
}
