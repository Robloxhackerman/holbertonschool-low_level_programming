#include <stdio.h>
#include "main.h"

/**
 * mian - print alphabet
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char PEPE;

	for(PEPE = 'a'; PEPE <= 'z'; PEPE++)
	{
		_putchar(PEPE);
	}

	_putchar('\n');
	return (0);
}
