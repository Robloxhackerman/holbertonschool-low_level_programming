#include "function_pointers.h"

/**
 * int_index - searches for an integer
 *
 * @size: num of elements in array
 * @cmp: a pointer
 * @array: array
 *
 * Return: the index of the first element for which
 * the cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int PEPE;

	if (array != NULL && cmp != NULL && size >= 0)
	{
		if (size <= 0)
		{
			return (-1);
		}
		else
		{
			for (PEPE = 0; size > PEPE; PEPE++)
			{
				if (cmp(array[PEPE]))
				{
					return (PEPE);
				}
			}
		}
	}
	else
	{
		return (-1);
	}

	return (-1);
}
