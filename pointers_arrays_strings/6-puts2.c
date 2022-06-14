#include "main.h"

/**
 * puts2 - prints character
 *
 * @str: string to print
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int PEPE1, PEPE2;

	PEPE1 = 0;

	while (str[PEPE1] != '\0')
	{
		PEPE1++;
	}
	for (PEPE2 = 0; PEPE2 < PEPE1 ; PEPE2++)
	{
		_putchar(str[PEPE2]);
		PEPE2++;
	}
	_putchar('\n');
}
