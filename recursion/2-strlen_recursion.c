#include "main.h"

/**
 * _strlen_recursion - return the lenght of an string
 *
 * @s: string to check
 *
 * @Return: nothing
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}

	return (1 + _strlen_recursion(s + 1));
}
