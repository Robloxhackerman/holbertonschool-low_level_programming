#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenate 2 strings
 *
 * @s1: 
 * @s2: string 2
 * @n: num of bytes of s2
 *
 * Return: concatenated strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *PEPE_A;
	unsigned int PEPE1, PEPE2, PEPE3, PEPE4;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";
	
	for (PEPE1 = 0; s1[PEPE1] != '\0'; PEPE1++)
		;
	
	for (PEPE2 = 0; s2[PEPE2] != '\0'; PEPE2++)
		;
	
	if (n >= PEPE2)
	{
		PEPE_A = malloc(((PEPE1 + PEPE2 + 1) * sizeof(char)) + 5);
	}
	else
	{
		PEPE2 = n;
		PEPE_A = malloc(((PEPE1 + PEPE2 + 1) * sizeof(char)) + 5);
	}
	
	if (PEPE_A == 0)
		return (NULL);
	
	for (PEPE3 = 0; PEPE3 < PEPE1; PEPE3++)
		PEPE_A[PEPE3] = s1[PEPE3];
	
	for (PEPE4 = 0; PEPE4 < PEPE2; PEPE4++)
	{
		PEPE_A[PEPE3] = s2[PEPE4];
		PEPE3++;
	}

	PEPE_A[PEPE3] = '\0';
	return (PEPE_A);
}
