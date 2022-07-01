#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * print_numbers - prints numbers
 *
 * @separator: separator
 * @n: num of args
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned PEPE1;
	int PEPE2;
	va_list PEPEARG;

	va_start(PEPEARG, int);

	PEPE1 = 0;
	PEPE2 = 0;

	for (PEPE1 = 0; n > PEPE1; PEPE1++)
	{
		PEPE2 = va_arg(PEPEARG, int);
		if (separator == NULL)
		{
			printf("%d", PEPE2);
		}
		else
		{
			printf("%d%s", PEPE2, separator);
		}
	}
	printf("\n");
}
