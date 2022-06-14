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
	int PEPE1, PEPE2;
	char PEPE_S;

	PEPE1 = 0;
	PEPE2 = 0;

	while (s[PEPE1] != '\0')
	{
		PEPE1++;
	}

	for (PEPE1 -= 1; PEPE1 >= 0; PEPE1--)
	{
		PEPE_S[PEPE2] = s[PEPE1];
		PEPE++;
	}
	*s = PEPE_S;
}
