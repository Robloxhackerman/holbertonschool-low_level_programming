#include <stdio.h>
#include "main.h"
/**
 * _islower - check for lowercase
 *
 * @c: character to be checked
 *
 * Return: 1 if lowcase, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
