#include "main.h"

/**
 * leet - encode a string into 1337
 *
 * @PEPIN: string to encode
 *
 * Return: string encoded
 */
char *leet(char *PEPIN)
{
	int PEPE1, PEPE2;
	char PEPE_C1[10] = {'A', 'E', 'O', 'T', 'L', 'a', 'e', 'o', 't', 'l'};
	char PEPE_C2[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};

	for (PEPE1 = 0; PEPIN[PEPE1] != '\0'; PEPE1++)
	{
		for (PEPE2 = 0; PEPE2 < 10; PEPE2++)
		{
			if (PEPIN[PEPE1] == PEPE_C1[PEPE2])
			{
				PEPIN[PEPE1] = PEPE_C2[PEPE2];
			}
		}
	}

	return (PEPIN);
}
