#include "main.h"
#include <stdlib.h>

/**
 * _calloc - llocates memory for an array, using malloc
 *
 * @nmemb: members
 * @size: size of bytes
 *
 * Return: if malloc fail, null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *PEPE_A;
	void *PEPE_AV;
	unsigned int PEPE_1, PEPE;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	PEPE_1 = size * nmemb;
	PEPE_A = malloc(PEPE_1);

	if (PEPE_A == 0)
	{
		return (NULL);
	}

	for (PEPE = 0; PEPE_1 > PEPE; PEPE++)
	{
		PEPE_A[PEPE] = 0;
	}

	PEPE_AV = PEPE_A;
	return (PEPE_AV);
}
