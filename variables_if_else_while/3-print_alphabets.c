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
		putchar(PEPE);
	}

	for (PEPE = "A"; PEPE <= "Z"; PEPE++)
	{
		putchar(PEPE);
	}
	putchar("\n");
	return (0);
}
