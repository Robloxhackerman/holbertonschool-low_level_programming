#include <stdio.h>
#include "main.h"

/**
 * print_square - print a square
 *
 * @size: size
 *
 * Return: nothing
 */
void print_square(int size)
{
	int PEPE1, PEPE2;
	
	for (PEPE1 = 0; size > PEPE1; PEPE1++)
	{
		for (PEPE2 = 0; PEPE2 < size; PEPE2++)
		{
			_putchar('#');
		}
		if (PEPE1 != size -1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
