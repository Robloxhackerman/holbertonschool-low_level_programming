#include "main.h"

/**
 * _strncat - concatenate 2 strings
 *
 * @dest: string
 * @src: string
 * @n: int
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int PEPE1, PEPE2;

	PEPE1 = 0;
	PEPE2 = 0;

	while (dest[PEPE1] != '\0')
	{
		PEPE1++;
	}

	while (src[PEPE2] != '\0' && PEPE2 < n)
	{
		dest[PEPE1] = src[PEPE2];
		PEPE1++;	
		PEPE2++;
	}

	dest[PEPE1] = '\0';

	return (dest);
}
