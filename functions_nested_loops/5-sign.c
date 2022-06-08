#include <stdio.h>
#include "main.h"
/**
 * print_sign - print the sign of a number
 *
 * @n: character to be checked
 *
 * Return: 1 if n is +, 0 if n is 0, -1 if n is -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	returno (0);
}
