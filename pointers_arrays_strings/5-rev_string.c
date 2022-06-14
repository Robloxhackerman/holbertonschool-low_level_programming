#include "main.h"

/**
 * rev_string - prints string in reverse
 *
 * @s: string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int PEPE;

	PEPE = 0;

	while (s[PEPE] != '\0')
	{
		PEPE++;
	}

	for (PEPE -= 1; PEPE >= 0; PEPE--)
	{
		_putchar(s[PEPE]);
	}
	_putchar('\n');
}
