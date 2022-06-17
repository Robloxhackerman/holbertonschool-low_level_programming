#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 *
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int PEPE1, PEPE2;

	for (PEPE1 = 48; PEPE1 <= 56; PEPE1++)
	{
		for (PEPE2 = 49; PEPE2 <= 57; PEPE2++)
		{
			if (PEPE2 > PEPE1)
			{
				putchar(PEPE1);
				putchar(PEPE2);
				if (PEPE1 != 56 || PEPE2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
