#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - algo
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int PEPE;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	PEPE = PEPE % 10;

	if (PEPE > 5)
	{
		printf("%dLast digit of", n, "is", "and is greater than 5\n");
	}
	else if (PEPE == 0)
	{
		printf("%dLast digit of", n, "is", "and is 0\n");
	}
	else if (PEPE < 6)
	{
		printf("%dLast digit of", n, "is", "and is less than 6 and not 0\n");
	}
	return (0);
}
