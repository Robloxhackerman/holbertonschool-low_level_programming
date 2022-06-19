#include "main.h"

/**
 * print_number - prints an int
 *
 * @n: int to print
 *
 * Return: nothing
 */
void print_number(int n)
{
	int PEPE;

	if (n < 0)
	{
		PEPE = -n;
		_putchar('-');
	}
	else
	{
		PEPE = n;
	}

	if (PEPE / 10)
	{
		print_number(PEPE / 10);
	}

	_putchar((PEPE % 10) + '0');
}
