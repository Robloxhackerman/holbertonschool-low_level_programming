#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int PEPE;

	for (PEPE = 0; *s != '\0'; s++)
	{
		PEPE++;
	}

	return (PEPE);
}
