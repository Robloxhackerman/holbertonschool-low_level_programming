#include <stdio.h>
#include "main.h"

/**
 * main - pepe
 *
 * Return: 
 */
int main(void)
{
	int PEPE;

	for (PEPE = 0; PEPE < 100; PEPE++)
	{
		if ((PEPE % 3) == 0)
		{
			printf(" Fizz");
		}
		else if ((PEPE % 5) == 0)
		{
			printf(" Buzz");
		}
		else if ((PEPE % 3) == 0 && (PEPE % 5) == 0)
		{
			printf(" FizzBuzz");
		}
		else
		{
			printf(" %d", PEPE);
		}
	}
	printf("\n");
	return (0);
}
