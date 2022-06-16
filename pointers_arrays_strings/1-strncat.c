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


	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;	
		j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}
