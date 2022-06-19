#include "main.h"

/**
 * string_toupper - change all lowercase to uppercase
 *
 * Return: uppercase string
 */
char *string_toupper(char *PEPIN)
{
	int PEPE;

	for (PEPE = 0; PEPIN[PEPE]!= '\0'; PEPE++)
	{
		if (PEPEIN[PEPE] >= 97 && PEPIN[PEPE] <= 122)
		{
			PEPIN[PEPE] = PEPIN[PEPE] - 32;
		}
	}
	return (PEPIN);
}
