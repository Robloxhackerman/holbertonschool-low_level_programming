#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 *
 * @width: 
 * @height:
 *
 * Return:
 */
int **alloc_grid(int width, int height)
{
	int PEPE1, PEPE2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		int PEPE_A[height][width];
	}

	for (PEPE1 = 0; PEPE1 < height; PEPE1++)
	{
		for (PEPE2 = 0; PEPE2 < width; PEPE2++)
		{
			PEPE_A[PEPE1][PEPE2] = '0';
		}
	}

	return (PEPE_A);
}
