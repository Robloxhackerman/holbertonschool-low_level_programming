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
	
	PEPE2 = PEPE_MX - PEPE_MN;
	PEPE_A1 = malloc(sizeof(int) * PEPE2);
	
	if (PEPE_A == 0)
	{
		return (NULL);
	}
	
	for (PEPE1 = 0; PEPE_MX <= PEPE_MN; PEPE1++)
	{
		PEPE_A[PEPE1] = PEPE_MN;
		PEPE_MN++;
	}
	
	return (PEPE_A);
}
