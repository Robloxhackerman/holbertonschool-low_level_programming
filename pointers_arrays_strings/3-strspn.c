#include "main.h"

/**
 * _strspn - gets lengthof a prefix substring
 *
 * @s: string to check
 * @accept: string to check
 *
 * Return: num of bytes of s in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int PEPE1, PEPE2;

	for (PEPE1 = 0; s[PEPE1]; PEPE1++)
	{
		for (PEPE2 = 0; accept[PEPE2]; PEPE2++)
		{
			if (s[PEPE1] == accept[PEPE2])
			{
				break;
			}
		}

		if (!accept[PEPE2])
		{
			break;
		}
	}

	return (PEPE1);
}
