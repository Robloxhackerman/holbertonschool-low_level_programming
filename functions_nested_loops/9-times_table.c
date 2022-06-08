#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times tables
 *
 * Return: Return nothing
 */
void times_table(void)
{
	int PEPE1, PEPE2, PEPE3;

	for (PEPE1 = 0; PEPE1 < 10; PEPE1++)
	{
		for (PEPE2 = 0; PEPE2 < 10; PEPE2++)
		{
			PEPE3 = PEPE2 * PEPE1;

			if (PEPE2 == 0)
			{
				_putchar(PEPE3 + '0');
			}
			if (PEPE3 < 10 && PEPE2 != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(PEPE3 + '0');
			} 
			else if (PEPE3 >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((PEPE3 / 10) + '0');
				_putchar((PEPE3 % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
