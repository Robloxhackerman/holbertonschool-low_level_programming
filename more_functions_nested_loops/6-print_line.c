#include <stdio.h>
#include "main.h"

/**
 * print_line - pritn n times line
 *
 * Return: nothing
 */
void print_line(int n)
{
	int PEPE;

	for ( PEPE = 0; PEPE <= n; PEPE++)
	{
		if ( n == 0)
		{
			_putchar(95);
		}
		else
		{
			_putchar('\n');
		}
	}
}
