#include "search_algos.h"

/**
 * linear_search -  searches for a value in an array of
 * integers using the  Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: is the value to search for
 *
 * Return: -1 if fail, index success
 */
int binary_search(int *array, size_t size, int value)
{
	size_t PEPITAD, PABAJO, PARRIBA, PEPE1;

	PABAJO = 0;
	PARRIBA = size;

	if (array == NULL)
	{
		return (-1);
	}
	while (PABAJO <= PARRIBA)
	{
		PEPITAD = (PABAJO + PARRIBA) / 2;

		printf("Searching in array: ");
		
		for (PEPE1 = PABAJO; PEPE1 <= PARRIBA; PEPE1++)
		{
			if (PEPE1 == PABAJO)
			{
				printf("%d", array[PEPE1]);
			}
			else
			{
				printf(", %d", array[PEPE1]);
			}
		}

		printf("\n");

		if (array[PEPITAD] < value)
		{
			PABAJO = PEPITAD + 1;
		}
		else if (array[PEPITAD] > value)
		{
			PARRIBA = PEPITAD;
		}
		else
		{
			return (PEPITAD);
		}
	}
	return (-1);
}
