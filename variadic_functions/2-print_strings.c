#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings
 *
 * @separator: the separator
 * @n: num of args
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int PEPE1;
	char *PEPE2;
	va_list PEPEARG;

	va_start(PEPEARG, n);

	PEPE1 = 0;

	for (PEPE1 = 0; n > PEPE1; PEPE1++)
	{
		PEPE2 = va_arg(PEPEARG, char *);

		if (separator == NULL)
		{
			printf("%s", PEPE2);
		}
		else if (PEPE1 == (n - 1))
		{
			printf("%s", PEPE2);
		}
		else if (PEPE2 == NULL)
		{
			printf("%s%s", PEPE2, "(nil)");
		}
		else
		{
			printf("%s%s", PEPE2, separator);
		}
	}
	printf("\n");
	va_end(PEPEARG);
}
