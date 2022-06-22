#include "main.h"
#include <stdlib.h>

/**
 * str_concatenate - concatenate 2 strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return:
 */
char *str_concat(char *s1, char *s2)
{
	char *PEPE_A;
	unsigned int PEPE1, PEPE2;

	PEPE1 = 0;
	PEPE2 = 0;

	while (s1[PEPE1])
	{
		PEPE1++;
	}

	while (s2[PEPE2])
	{
		PEPE2++;
	}

	PEPE3 = PEPE1 + PEPE2;
	
	PEPE_A = malloc(sizeof(char) * PEPE3);

	for (PEPE4 = 0; PEPE4 <= PEPE3; PEPE4++)
	{
		if (s1[PEPE4] <= PEPE1)
		{
			PEPE_A[PEPE4] = s1[PEPE4]
		}
		else if (s2[PEPE4] <= PEPE2)
		{
			PEPE_A[PEPE4] = s2[PEPE4];
		}
	}
}

