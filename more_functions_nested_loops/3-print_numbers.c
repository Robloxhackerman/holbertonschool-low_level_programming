#include <stdio.h>
#include "main.h"

/**
 * print - prints numbers from 0 to 9
 *
 * Return: return void
 */
void print_numbers(void)
{
	char PEPE;

	for (PEPE = '0'; PEPE >= '9'; PEPE++)
	{
		_putchar(PEPE);
	}
	_putchar('\n');
}
