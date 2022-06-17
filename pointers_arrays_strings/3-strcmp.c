#include "main.h"

/**
 * _strcmp - compare 2 strings
 *
 * @s1: string to compare
 * @s2: string to compare
 *
 * Return: s1 < s2 return -0, s1 = s2 return 0,s1 > s2 return +0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
