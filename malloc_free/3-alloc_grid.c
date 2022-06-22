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
	int PEPE1, PEPE2, PEPEH = 0, PEPEW = 0;
	int PEPE_A[PEPEH][PEPEW];

	if (width <= 0 || height <= 0)
	{
		return (NULL);
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
