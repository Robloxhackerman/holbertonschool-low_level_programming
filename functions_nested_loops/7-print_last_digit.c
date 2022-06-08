#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit of an int
 *
 * @n: int to be checked
 *
 * Return: return pepe
 */
int print_last_digit(int n)
{
	int PEPE;

	PEPE = n % 10;

	if (PEPE < 0)
	{
		PEPE = PEPE * -1;
	}
	_putchar(PEPE + '0');
	return (PEPE);
}
