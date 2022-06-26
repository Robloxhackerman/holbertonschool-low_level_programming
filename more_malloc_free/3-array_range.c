#include "main.h"
#include <stdlib.h>

/**
 * array_range -
 *
 * @min:
 * @max:
 *
 * Return:
 */
int *array_range(int min, int max)
{
	int PEPE_MN, PEPE_MX, PEPE1, PEPE2;
	int *PEPE_A;

	PEPE_MN = min;
	PEPE_MX = max;

	if (PEPE_MN > PEPE_MX)
	{
		return (NULL);
	}
	
	PEPE1 = PEPE_MX - PEPE_MN;
	PEPE_A = malloc(sizeof(int) * PEPE1 + 4);
	
	if (PEPE_A == 0)
	{
		return (NULL);
	}
	
	for (PEPE2 = 0; PEPE_MX >= PEPE_MN; PEPE2++)
	{
		PEPE_A[PEPE2] = PEPE_MN;
		PEPE_MN++;
	}
	
	return (PEPE_A);
}
