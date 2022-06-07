#include <stdio.h>

/**
 * main - algo
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char PEPE;

	for (PEPE = 'a'; PEPE <= 'z'; PEPE++)
	{
		if (PEPE == 'e' || PEPE == 'q')
		{
			PEPE++;
		}
		else
		{
			putchar(PEPE);
		}
	}

	putchar('\n');
	return (0);
}
