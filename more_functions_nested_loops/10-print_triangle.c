#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: the size
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int PEPE1, PEPE2;

	for (PEPE1 = 0; size > PEPE1; PEPE1++)
	{
		for (PEPE2 = 1;  (size - PEPE1) > PEPE2; PEPE2++)
		{
			_putchar(' ');
		}
		for (PEPE2--; size > PEPE2; PEPE2++)
		{
			_putchar(35);
		}
		if (PEPE1 < (size - 1))
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
