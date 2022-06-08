#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit of an int
 *
 */
int print_last_digit(int n)
{
	int PEPE;

	PEPE = n % 10;

	_putchar(PEPE);
	return (PEPE);
}
