#include <stdio.h>
#include "main.h"

/**
 * more_numbers -
 *
 * Return:
 */
void more_numbers(void)
{
	int PEPE1, PEPE2;

	for (PEPE1 = 0; PEPE1 < 10; PEPE1++)
	{
		for (PEPE2 = 0; PEPE2 < 15; PEPE2++)
		{
			if (PEPE2 >= 10)
			{
				_putchar((PEPE2 / 10) + 48);
			}
			_putchar((PEPE2 % 10) + 48);
		}
		_putchar('\n');
	}
}
