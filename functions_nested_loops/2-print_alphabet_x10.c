#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char PEPE_C;
	int PEPE_I;

	for (PEPE_I = 0; PEPE_I <= 9; PEPE_I++)
	{
		for (PEPE_C = 'a'; PEPE_C <= 'z'; PEPE_C++)
		{
			_putchar(PEPE_C);
		}
		_putchar('\n');
	}
}
