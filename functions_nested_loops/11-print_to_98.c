#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 *
 * @n: the int to be checked
 */
void print_to_98(int n)
{
	int PEPE1, PEPE2;

	if (n <= 98)
	{
		for (PEPE1 = n; PEPE1 <= 98; i++)
		{
			if (PEPE1 != 98)
			{
				printf("%d, ", PEPE1);
			}
			else if (PEPE1 == 98)
			{
				printf("%d\n", PEPE1);
			}
		}
	}
	else if (n >= 98)
	{
		for (PEPE2 = n; PEPE2 >= 98; PEPE2--)
		{
			if (PEPE2 != 98)
			{
				printf("%d, ", PEPE2);
			}
			else if (PEPE2 == 98)
			{
				printf("%d\n", PEPE2);
			}
		}
	}
}
