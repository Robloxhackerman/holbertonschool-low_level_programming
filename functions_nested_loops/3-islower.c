#include <stdio.h>
#include "main.h"
/**
 * main - check for lowercase
 *
 * Return: 1 if lowcase, 0 if not
 */
int _islower(int c);
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
