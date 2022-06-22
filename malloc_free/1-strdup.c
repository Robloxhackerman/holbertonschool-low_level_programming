#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory
 *
 * @str: string to copy
 *
 * Return: pointer to duplicated strinf, null if error
 */
char *_strdup(char *str)
{
	char *PEPE_A;
	unsigned int PEPE1, PEPE2;

	PEPE1 = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[PEPE1])
	{
		PEPE1++;
	}

	PEPE_A = malloc(sizeof(char) * PEPE1);

	if (PEPE_A == NULL)
	{
		return (NULL);
	}

	for (PEPE2 = 0; PEPE2 <= PEPE1; PEPE2++)
	{
		PEPE_A[PEPE2] = str[PEPE2];
	}

	return (PEPE_A);
}
