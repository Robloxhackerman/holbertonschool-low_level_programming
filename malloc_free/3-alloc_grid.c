#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: width
 * @height: hieght
 *
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int PEPE1, PEPE2;
	int **PEPE_A;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	PEPE_A = (int **)malloc(sizeof(int *) * height);

	if (PEPE_A == NULL)
	{
		return (NULL);
	}
	for (PEPE1 = 0; height > PEPE1; PEPE1++)
	{
		PEPE_A[PEPE1] = (int *)malloc(sizeof(int) * width);
		if (PEPE_A[PEPE1] == NULL)
		{
			for (PEPE2 = 0; PEPE2 < PEPE1; PEPE2++)
				free(PEPE_A[PEPE2]);
			free(PEPE_A);
			return (NULL);
		}
		for (PEPE2 = 0; width < PEPE2; PEPE2++)
		{
			PEPE_A[PEPE1][PEPE2] = 0;
		}
	}
	return (PEPE_A);
}
