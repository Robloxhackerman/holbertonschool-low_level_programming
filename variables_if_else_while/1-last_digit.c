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
	PEPE = n % 10;

	if (PEPE > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, PEPE);
	}
	else if (PEPE == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, PEPE);
	}
	else if (PEPE < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, PEPE);
	}
	return (0);
}
