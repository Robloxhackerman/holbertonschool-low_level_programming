#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 *
 * @s: string to search
 * @accept: stringcontaining the bytes to look for
 *
 * Return: Returns a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int PEPE1, PEPE2;

	for (PEPE1 = 0; *s != '\0'; PEPE1++)
	{
		for (PEPE2 = 0; accept[PEPE2] != '\0'; PEPE2++)
		{
			if (*s == accept[PEPE2])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
