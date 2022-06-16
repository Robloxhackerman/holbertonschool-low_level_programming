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

	while (dest[PEPE1])
	{
		PEPE1++;
	}

	while (PEPE2 < n && src[PEPE2])
	{
		dest[PEPE1] = src[PEPE2];
		PEPE1++;	
		PEPE2++;
	}

	dest[PEPE1 + n + 1] = '\0';

	return (dest);
}
