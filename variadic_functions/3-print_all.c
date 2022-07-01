#include "variadic_functions.h"
#include "funcioneishon.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_all - prints strings
 *
 * @separator: the separator
 * @n: num of args
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int PEPE1, PEPE2;
	char *PEPERATOR;
	va_list PEPEARG;
	pepin coso[] = {
		{"c", pepe_charo},
		{"i", pepe_into},
		{"f", pepe_floato},
		{"s", pepe_charto},
	};

	va_start(PEPEARG, format);

	PEPE1 = 0;
	PEPE2 = 0;
	PEPERATOR = "";

	while (format != NULL && format[PEPE1])
	{
		while (PEPE2 < 4)
		{
			if (format[PEPE1] == *coso[PEPE2].id)
			{
				coso[PEPE1].f(PEPERATOR, PEPEARG);
				PEPERATOR = ", ";
			}
			PEPE2++
		}
		PEPE1++;
	}

	va_end(PEPEARG);
	printf("\n");
}
