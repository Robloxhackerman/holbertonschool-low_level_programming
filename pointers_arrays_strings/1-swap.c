#include "main.h"

/**
 * swap_int - swap values
 *
 * @a: value to swap
 * @b: value to swap
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int PEPE;

	PEPE = *a;
	*a = *b;
	*b = PEPE;
}

