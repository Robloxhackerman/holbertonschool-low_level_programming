#include "main.h"

/**
 * rev_string - prints string in reverse
 *
 * @s: string
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	char PEPE_S;
	int PEPE1, PEPE2, PEPE3;

	PEPE1 = 0;
	PEPE2 = 0;

	while (s[PEPE1] != '\0')
	{
		PEPE1++;
	}

	PEPE2 = PEPE1 - 1;

	for (PEPE3 = 0; PEPE1 > PEPE3 / 2; PEPE3++)
	{
		PEPE_S = s[PEPE3];
		s[PEPE3] = s[PEPE2];
		s[PEPE2--] = PEPE_S;
	}
}
