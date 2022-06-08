#include <stdio.h>
#include "main.h"
/**
 * _islower - check for alpha
 *
 * @c: character to be checked
 *
 * Return: 1 if is alpha, 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122) || (c >=65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
