#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: return void
 */
void print_most_numbers(void)
{
	int PEPE;

	for (PEPE = 48; PEPE < 58; PEPE++)
	{
		if (PEPE != 50 || PEPE != 52)
		{
			_putchar(PEPE);
		}
		else
		{
			PEPE++;
		}
	}
	_putchar('\n');
}
