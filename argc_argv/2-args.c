#include "main.h"
#include <stdio.h>

/**
 * main - prnits num of args
 *
 * @argc: num of args
 * @argv: a
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int PEPE;

	for (PEPE = 0; argc > PEPE; PEPE++)
	{
		printf("%s\n", argv[PEPE]);
	}

	return (0);
}
