#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: array
 *
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int PEPE1, PEPE2;

	for (PEPE1 = 0; PEPE1 < 8; PEPE1++)
	{
		for (PEPE2 = 0; PEPE2 < 8; PEPE2++)
		{
			_putchar(a[PEPE1][PEPE2]);
		}
		_putchar('\n');
	}
}
