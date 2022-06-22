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
	unsigned int PEPE1, PEPE2, PEPE3, PEPE4;

	PEPE1 = 0;
	PEPE2 = 0;
	if (s1 == NULL)
		s1 = "";
	else
	{
		PEPE1 = sizeof(s1);
	}

	if (s2 == NULL)
		s2 = "";
	else
	{
		while (s2[PEPE2])
			PEPE2++;
	}
	PEPE3 = PEPE1 + PEPE2;
	PEPE_A = malloc((sizeof(char) * PEPE3) + 1);
	if (PEPE_A == NULL)
		return (NULL);
	for (PEPE4 = 0; PEPE4 <= PEPE3; PEPE4++)
	{
		if (PEPE4 < PEPE1)
			PEPE_A[PEPE4] = s1[PEPE4];
		if (PEPE4 < PEPE2)
			PEPE_A[PEPE4] = s2[PEPE4];
	}

	PEPE_A[PEPE4] = '\n';
	return (PEPE_A);
}
