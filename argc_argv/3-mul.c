#include "main.h"
#include <stdio.h>

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
	int PEPE;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		PEPE = argv[1] * argv[2];
	}

	return (0);
}
