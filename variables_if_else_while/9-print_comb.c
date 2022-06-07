#include <stdio.h>

/**
 * main - algo
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int PEPE;

	for (PEPE = '0'; PEPE <= '9'; PEPE++)
	{
		putchar(PEPE);

		if (PEPE != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
