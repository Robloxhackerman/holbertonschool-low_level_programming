#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array
 *
 * @size: size
 * @action: aaaa
 * @array: array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int PEPE;

	if (action != NULL && array != NULL && size > 0)
	{
		for (PEPE = 0; size > PEPE; PEPE++)
		{
			action(array[PEPE]);
		}
	}
}
