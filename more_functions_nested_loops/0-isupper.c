#include <stdio.h>
#include "main.h"

/**
 * _isupper - check for uppercase
 *
 * @c: value to check
 *
 * Return: 1 c is uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
