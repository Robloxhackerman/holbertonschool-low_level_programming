#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string to check
 * @c: character to check
 *
 * Return: pointer to spot in s with c or null
 */
char *_strchr(char *s, char c)
{
	int PEPE;

	for (PEPE = 0; *(s + PEPE); PEPE++)
	{
		if (*(s + PEPE) == c)
		{
			return (s + PEPE);
		}
	}

	if (*(s + PEPE) == c)
	{
		return (s + PEPE);
	}

	return (0);
}
