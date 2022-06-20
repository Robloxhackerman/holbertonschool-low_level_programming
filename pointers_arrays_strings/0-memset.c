#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: space to fill
 * @b: byte to fill
 * @n: num of space to fill
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int PEPE;

	for (PEPE = 0; PEPE < n; PEPE++)
	{
		*(s + PEPE) = b;
	}

	return (s);
}
