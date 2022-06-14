#include "main.h"

/**
 * puts_half - a
 *
 * @str: string
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int PEPE1, PEPE2, PEPE3;

	PEPE1 = 0;

	while (str[PEPE1] != '\0')
	{
		PEPE2++;
	}
	
	for (PEPE3 = (PEPE2 / 2); PEPE3 >= PEPE2; PEPE3++)
	{
		_putchar(str[PEPE3]);
	}
	_putchar('\n');
}
