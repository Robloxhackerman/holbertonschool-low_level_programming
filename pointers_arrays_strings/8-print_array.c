#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of ar array
 *
 * @a: value
 * @n: value
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int PEPE;

	for (PEPE = 0; n > PEPE; PEPE++)
	{
		if (PEPE == 0)
		{
			printf("%d", a[PEPE]);
		}
		else
		{
			printf(", %d", a[PEPE]);
		}
	}
	printf("\n");
}
