#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */
void print_alphabet(void)
{
	char PEPE;

	for (PEPE = 'a'; PEPE <= 'z'; PEPE++)
	{
		_putchar(PEPE);
	}

	_putchar('\n');
}
