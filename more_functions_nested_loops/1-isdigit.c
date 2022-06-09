#include <stdio.h>
#include "main.h"

/**
 * _isdigit - check for digit
 *
 * @c: value to check
 *
 * Return: 1 if c is digit, 0 if not
 */
int _isdigit(int c)
{
	if (c > 47 && c < 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
