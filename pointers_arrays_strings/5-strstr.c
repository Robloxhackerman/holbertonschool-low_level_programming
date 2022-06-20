#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: string to search in
 * @needle: substring to look for
 *
 * Return: Returns a pointer to the beginning of the located
 * substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	int PEPE1, PEPE2;

	for (PEPE1 = 0; haystack[PEPE1] != '\0'; PEPE1++)
	{
		for (PEPE2 = 0; needle[PEPE2] != '\0'; PEPE2++)
		{
			if (haystack[PEPE1 + PEPE2] != needle[PEPE2])
			{
				break;
			}
		}

		if (!needle[PEPE2])
		{
			return (&haystack[PEPE1]);
		}
	}

	return (NULL);
}
