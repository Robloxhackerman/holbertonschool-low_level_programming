#include "main.h"

/**
 * reverse_array - reverse the content of an array
 *
 * @a: int
 * @n: int
 *
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int PEPE1, PEPE2;

	for (PEPE1 = 0; (n / 2) >= PEPE1; PEPE1++)
	{
		PEPE2 = a[PEPE1];
		a[PEPE1] = a[n - PEPE1 -1];
		a[n - PEPE1 - 1] = PEPE2;
	}
}
