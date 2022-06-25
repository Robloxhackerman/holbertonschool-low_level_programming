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
	unsigned int PEPE1, b, c, d;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (PEPE1 = 0; s1[PEPE1] != '\0'; PEPE1++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	if (n > b)
		PEPE_A = malloc((PEPE1 + b + 1) * sizeof(char));
	else
		PEPE_A = malloc((PEPE1 + n + 1) * sizeof(char));
	if (PEPE_A == 0)
		return (NULL);

	for (c = 0; c < PEPE1; c++)
		PEPE_A[c] = s1[c];
	for (d = 0; d < n && d < b; d++, c++)
		PEPE_A[c] = s2[d];
	PEPE_A[c] = '\0';
	return (PEPE_A);
}
