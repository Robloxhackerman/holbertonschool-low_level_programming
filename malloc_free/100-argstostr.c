#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of your program
 *
 * @ac: num of arguments
 * @av: arguments
 *
 * Return: Returns a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int PEPE1, PEPE2, PEPE3, PEPE4;
	char *PEPE_A;

	if (ac == 0)
	{
		return (NULL);
	}
	if (av == 0)
	{
		return (NULL);
	}
	PEPE1 = 0;
	for (PEPE2 = 0; ac > PEPE2; PEPE2++)
	{
		for (PEPE3 = 0; av[PEPE2][PEPE3] != '\0'; PEPE3++)
		{
			PEPE1++;
		}	
		PEPE1++;
	}
	PEPE1++;
	PEPE_A = malloc(sizeof(char) * PEPE1);
	if (PEPE_A == 0)
	{
		return (NULL);
	}
	PEPE4 = 0;
	for (PEPE2 = 0; ac > PEPE2; PEPE2++)
	{
		for (PEPE3 = 0; av[PEPE2][PEPE3] != '\0'; PEPE3++)
		{
			PEPE_A[PEPE4++] = av[PEPE2][PEPE3];
		}
		
		PEPE_A[PEPE4++] = '\n';
	}	
	PEPE_A[PEPE4] = '\0';
	return (PEPE_A);
}
