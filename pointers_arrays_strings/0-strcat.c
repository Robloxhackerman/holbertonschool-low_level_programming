#include "main.h"

/**
 * _strcat - concatenate 2 strings
 *
 * @dest: string
 * @src: string
 *
 * Return:
 */
char *_strcat(char *dest, char *src)
{
	int PEPE1, PEPE2;

	PEPE1 = 0;

	while (dest[PEPE1])
	{
		PEPE1++;
	}


	for (PEPE2 = 0; src[PEPE2] != 0; PEPE2++)
	{
		dest[PEPE1] = src[PEPE2];
		PEPE1++;
	}

	dest[PEPE1] = '\0';
	return (dest);
}
