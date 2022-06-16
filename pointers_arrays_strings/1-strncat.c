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
	int PEPE1 = 0, j = 0;


	while (dest[PEPE1])
	{
		PEPE1++;
	}

	while (j < n && src[j])
	{
		dest[PEPE1] = src[j];
		PEPE1++;	
		j++;
	}

	dest[PEPE1 + n + 1] = '\0';

	return (dest);
}
