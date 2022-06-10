#include <stdio.h>
#include "main.h"

/**
 * print_diagonal
 *
 * Return: nothing
 */
void print_diagonal(int n)
{
	int PEPE1, PEPE2;

	for (PEPE1 = 0; n < PEPE1; PEPE1++)
	{
		for (PEPE2 = 0; PEPE2 < PEPE1; PEPE2++)
		{
			_putchar(' ');
		}
		if (PEPE1 < (n - 1))
		{
			_putchar('\n');
		}
	}
	_putchar(92);
}
