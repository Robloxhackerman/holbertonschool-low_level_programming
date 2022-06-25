#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings
 *
 * @s1: string 1
 * @s2: string 2
 * @n: num of bytes of s2
 *
 * Return: concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *PEPE_A;
	unsigned int PEPE1, PEPE2, PEPE3, PEPE4;

	PEPE1 = 0;
	PEPE2 = 0;
	
	if (s1 == 0)
	{
		s1 = "";
	}
	else
	{
		while (s1[PEPE1] != '\0')
			PEPE1++;
	}
	
	if (s2 == 0)
	{
		s2 = "";
	}
	else
	{
		while (s2[PEPE2] != '\0')
		{
			PEPE2++;
		}
	}
	
	PEPE3 = PEPE1 + n;
	PEPE_A = malloc(sizeof(char) * (PEPE3 + 1));
	
	if (PEPE_A == NULL)
	{
		return (NULL);
	}
	
	for (PEPE4 = 0; PEPE4 <= PEPE3; PEPE4++)
	{
		if (PEPE4 < PEPE1)
		{
			PEPE_A[PEPE4] = s1[PEPE4];
		}
		
		if (PEPE4 < PEPE2)
		{
			PEPE_A[PEPE4] = s2[PEPE4];
		}
	}

	PEPE_A[PEPE4] = '\n';
	return (PEPE_A);
}
