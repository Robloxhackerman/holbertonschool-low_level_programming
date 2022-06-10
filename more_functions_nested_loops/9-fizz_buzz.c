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
	
	printf("1");
	printf(" 2");

	for (PEPE = 3; PEPE < 100; PEPE++)
	{
		if ((PEPE % 3) == 0 && (PEPE % 5) == 0)
		{
			printf(" FizzBuzz");
		}
		else if ((PEPE % 5) == 0)
		{
			printf(" Buzz");
		}
		else if ((PEPE % 3) == 0)
		{
			printf(" Fizz");
		}
		else
		{
			printf(" %d", PEPE);
		}
	}
	printf("\n");
	return (0);
}
