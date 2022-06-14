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
		PEPE1++;
	}

	if (PEPE1 % 2 == 0)
	{
		for (PEPE2 = PEPE1 / 2; str[PEPE2] != '\0'; PEPE2++)
		{
			_putchar(str[PEPE2]);
		}
	}
	else if (PEPE1 % 2)
	{
		for (PEPE3 = (PEPE1 - 1) / 2; PEPE1 - 1 > PEPE3; PEPE3++)
		{
			_putchar(str[PEPE3 + 1]);
		}
	}
	_putchar('\n');
}
