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
	int PEPE;

	for (PEPE = 0; str[PEPE] != '\0'; PEPE++)
	{
		_putchar(str[PEPE]);
		PEPE++;
	}
	_putchar('\n');
}
