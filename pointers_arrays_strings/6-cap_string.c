#include "main.h"

/**
 * cap_string - capitalize a string
 *
 * @PEPI: string
 *
 * Return: capi. string
 */
char *cap_string(char *PEPI)
{
	int PEPE1, PEPE2;
	char PEPE_C[13] = {' ', '\n', '\t', ',', ';', '.',
	       	'!', '?', '"', '(', ')', '{', '}'};

	for (PEPE1 = 0; PEPI[PEPE1] != '\0'; PEPE1++)
	{
		if (PEPE1 == 0 && PEPI[PEPE1] >= 97 && PEPI[PEPE1] <= 122)
		{
			PEPI[PEPE1] = PEPI[PEPE1] - 32;
		}
		for (PEPE2 = 0; PEPE2 < 13 ; PEPE2++)
		{
			if (PEPI[PEPE1] == PEPE_C[PEPE2])
			{
				if (PEPI[PEPE1 + 1] >= 97 && PEPI[PEPE1 + 1] <= 122)
				{
					PEPI[PEPE1 + 1] = PEPI[PEPE1 + 1] - 32;
				}
			}
		}
	}
	return (PEPI);
}
