#include "main.h"
#include <stdlib.h>

/**
 * argstostr - 
 *
 * @ac:
 * @av:
 *
 * Return:
 */
ar *argstostr(int ac, char **av)
{
	int PEPE1, PEPE2, PEPE3, PEPE4;
	char *PEPE_A;

	PEPE4 = 0;

	if (ac == NULL)
	{
		return (NULL);
	}
	if (av == NULL)
	{
		return (NULL);
	}

	for(PEPE1 = 0; ac > PEPE1; PEPE1++)
	{
		for (PEPE2 = 0; av != '\0'; PEPE2++)
		{
			PEPE3++;
		}
		PEPE3++;
	}

	PEPE_A = malloc((sizeof(char) * PEPE3) + 1);

	if (PEPE_A == NULL)
	{
		return (NULL);
	}
	for (PEPE1 = 0; ac > PEPE1; PEPE1++)
	{
		for (PEPE2 = 0; av[PEPE1][PEPE2] != '\0'; PEPE2++)
		{
			PEPE_A[PEPE4] = av[PEPE1][PEPE2];
			PEPE4++;
		}
	}

	return (PEPE_A);
}
