#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * sum_them_All - sum numbers
 *
 * @n: num of args
 *
 * Return: result of sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int PEPE1;
        int PEPE2;

	va_list PEPEMETRO;
	va_start(PEPEMETRO, n);

	PEPE2 = 0;

	if (n == 0)
	{
		return (NULL);
	}
	else
	{
		for (PEPE1 = 0; n > PEPE1; PEPE1++)
	
		{
		
			PEPE2 = PEPE2 + va_arg(PEPEMETRO, int);
	
		}
	}
	va_end(PEPEMETRO);
	return (PEPE2);
}
