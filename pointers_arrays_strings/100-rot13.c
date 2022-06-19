#include "main.h"

/**
 * rot13 - encode a tring in rot13
 *
 * @PEPEIN: string to encode
 *
 * Return: string encoded
 */
char *rot13(char *PEPIN)
{
	int PEPE1, PEPE2;
	char *PEPE_C1 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *PEPE_C2 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (PEPE1 = 0; PEPIN[PEPE1] != '\0'; PEPE1++)
	{
		for (PEPE2 = 0; PEPE_C1[PEPE2]; PEPE2++)
		{
			if (PEPIN[PEPE1] == PEPE_C1[PEPE2])
			{
				PEPIN[PEPE1] = PEPE_C2[PEPE2];
				break;
			}
		}
	}

	return (PEPIN);
}
