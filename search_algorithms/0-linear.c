#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 *
 * Return: -1 if fail, index success
 */
int linear_search(int *array, size_t size, int value)
{
	size_t PEPE1;

	if (array == NULL)
	{
		return (-1);
	}
	for (PEPE1 = 0; size > PEPE1; PEPE1++)
	{
		printf("Value checked array[%lu] = [%d]\n", PEPE1, array[PEPE1]);

		if (value == array[PEPE1])
		{
			return (PEPE1);
		}
	}
	return (-1);
}
