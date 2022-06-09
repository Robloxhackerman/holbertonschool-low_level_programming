#include <stdio.h>
#include "main.h"

/**
 * _isupper - check for uppercase
 *
 * Return: 1 c is uppercase, 0 if not
 */
int _isupper(int c)
{
	if (c > 65) && (c < 91)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
