#include "main.h"

/**
 * _puts - prints a string
 *
 * @str: string to print
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int PEPE;

	for (PEPE = 0; str[PEPE] != '\0'; PEPE++)
	{
		_putchar(str[PEPE]);
	}
	_putchar('\n');
}
