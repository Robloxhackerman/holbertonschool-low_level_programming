#include "main.h"

/**
 * print_rev - prints string in reverse
 *
 * @s: string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int PEPE;

	while (s[PEPE] != '\0')
	{
		PEPE++;
	}
	
	for(; PEPE >= 0; PEPE--)
	{
		_putchar(s[PEPE]);
	}
	_putchar('\n');
}
