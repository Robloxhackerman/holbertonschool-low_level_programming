#include <stdio.h>

/**
 * main - algo
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char PEPE;

	for (PEPE = '0'; PEPE <= '9'; PEPE++)
	{
		putchar(PEPE);
	}

	for (PEPE = 'a'; PEPE <= 'f'; PEPE++)
	{
		putchar(PEPE);
	}
	putchar('\n');
	return (0);
}
