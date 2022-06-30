#include <stdio.h>
#include <stdlib.h>

/**
 * main - function to print its own opcode
 *
 * @argc: num of args
 * @argv: args
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	int PEPE1, PEPE2;
	char *PEPE_A;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}

	PEPE1 = atoi(argv[1]);

	if (PEPE1 < 0)
	{
		printf("Error\n");
		exit(2);
	}

	PEPE_A = (char *)main;

	for (PEPE2 = 0; PEPE1 - 1 > PEPE2; PEPE2++)
	{
		printf("%02hhx ", PEPE_A[PEPE2]);
	}

	printf("%02hhx\n", PEPE_A[PEPE2]);
	return (0);
}
