#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of
 * a square matrix of integers
 *
 * @a: a
 * @size: size 
 *
 * Return: nothing
 */
void print_diagsums(int *a, int size)
{
	int PEPE1;

	unsigned int PEPE2, PEPE3;

	PEPE2 = 0;
	PEPE3 = 0;

	for (PEPE1 = 0; PEPE1 < size; PEPE1++)
	{
		PEPE2 += a[(size * PEPE1) + PEPE1];
		PEPE3 += a[(size * (PEPE1 + 1)) - (PEPE1 + 1)];
	}

	printf("%d, %d\n", PEPE2, PEPE3);
}
