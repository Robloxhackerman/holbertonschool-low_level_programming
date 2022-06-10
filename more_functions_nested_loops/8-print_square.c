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
		while ((PEPE2 = 0) < size)
		{
			_putchar('#');
			PEPE2++;
		}
		_putchar('\n');
	}
}
