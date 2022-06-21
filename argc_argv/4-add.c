#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - multiplies 2 numbers
 *
 * @argc: num of args
 * @argv: args
 *
 * Return: 0 (success), 1 (very bad)
 */
int main(int argc, char *argv[])
{
	int PEPE1, PEPE2, PEPE_R;

	for (PEPE1 = 1; argc < PEPE1; PEPE1++)
	{
		for (PEPE2 = 0; argv[PEPE1][PEPE2]; PEPE2++)
		{
			if (isdigit(argv[PEPE1][PEPE2]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	
	for (PEPE1 = 0; argc > PEPE1; PEPE1++)
	{
		PEPE_R = atoi(argv[PEPE1]);
	}

	printf("%d\n", PEPE_R);

	return (0);
}
