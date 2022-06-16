#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: string
 * @src: string
 * @n: int
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int PEPE;

	PEPE = 0;

	while (src[PEPE] != '\0' && PEPE < n)
	{
		dest[PEPE] = src[PEPE];
		PEPE++;
	}
	return (dest);
}
