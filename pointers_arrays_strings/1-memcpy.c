#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: dest of copy
 * @src: memory to copy
 * n: num of bytes to copy
 *
 * Return:
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int PEPE;

	for (PEPE = 0; n > PEPE; PEPE++)
	{
		*(dest + PEPE) = *(src + PEPE);
	}

	return (dest);
}
