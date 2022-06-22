#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char
 *
 * @size: size of the array
 * @c: char to the array
 *
 * Return: pointer to the array, NULL if size is 0 or if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *PEPE_A;
	unsigned int PEPE;

	if (size == 0)
	{
		return (NULL);
	}

	PEPE_A = malloc(sizeof(char) * size);

	if (PEPE_A == NULL)
	{
		return (NULL);
	}

	for (PEPE = 0; size > PEPE; PEPE++)
	{
		PEPE_A[PEPE] = c;
	}

	return (PEPE_A);
}
