#include "main.h"

/**
 * cap_string capitalize a string
 *
 * @PEPIN: string to capitalize
 *
 * Return: capitalized string
 */
char *cap_string(char *PEPIN)
{
	int PEPE1, PEPE2;
	char PEPE_C[13] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}'};

	for (PEPE1 = 0; PEPIN[PEPE1] != '\0'; PEPE1++)
	{
		if (PEPIN[PEPE1] >= 97 && PEPIN[PEPE1] <= 122)
		{
			PEPIN[PEPE1] = PEPIN[PEPE1] - 32;
		}
		for (PEPE2 = 0; PEPE2 < 13 ; PEPE++)
		{
		}
	}

	return (PEPIN);
}
