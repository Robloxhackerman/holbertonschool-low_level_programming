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
	int PEPE1, PEPE2, PEPE3;

	PEPE2 = n - 1;

	for (PEPE1 = 0; PEPE1 <= n / 2; PEPE1++)
	{
		PEPE3 = a[PEPE1];
		a[PEPE1] = a[PEPE2];
		a[PEPE2--] = PEPE3;
	}
}
