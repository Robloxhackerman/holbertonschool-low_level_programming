#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - prints numbers from 0 to 9, do not print 2 and 4
 *
 * Return: return void
 */
void print_most_numbers(void)
{
	int PEPE;

	for (PEPE = 48; PEPE < 58; PEPE++)
	{
		if (PEPE != 50 && PEPE != 52)
		{
			_putchar(PEPE);
		}
	}
	_putchar('\n');
}
