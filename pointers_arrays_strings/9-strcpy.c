#include "main.h"

/**
 * _strcpy - copies the string pointed to by src
 *
 * @dest
 * @src
 *
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int PEPE;

	for (PEPE = 0; src[PEPE] != '\0'; PEPE++)
	{
		dest[PEPE] = src[PEPE];
	}

	dest[PEPE++] = '\0';
	return (dest);
}
