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
	int PEPE_MN, PEPE_MX, PEPE1, PEPE2, PEPE3;
	int PEPE_A1[max - min];
	int *PEPE_A2;

	PEPE_MN = min;
	PEPE_MX = max;

	if (PEPE_MN > PEPE_MX)
	{
		return (NULL);
	}

	for (PEPE1 = 0; PEPE_MX <= PEPE_MN; PEPE1++)
	{
		PEPE_A1[PEPE1] = PEPE_MN;
		PEPE_MN++;
	}
	PEPE2 = PEPE_MX - PEPE_MN;
	PEPE_A2 = malloc(sizeof(int) * PEPE2);

	if (PEPE_A2 == 0)
	{
		return (NULL);
	}

	for (PEPE3 = 0; PEPE2 >= PEPE3; PEPE3++)
	{
		PEPE_A2[PEPE3] = PEPE_A1[PEPE3];
	}
	return (PEPE_A2);
}
