#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	size_t PEPE1;

	if (array == NULL)
	{
		return (-1)
	}
	for (PEPE1 = 0; size > PEPE1; PEPE1++)
	{
		if (value == array[PEPE1])
		{
			printf("Found %d at index: %d", value, PEPE1);
		}
		printf("Value checked array[%d] = [%d]", PEPE1, array[PEPE1]);
	}
	return (0);
}
