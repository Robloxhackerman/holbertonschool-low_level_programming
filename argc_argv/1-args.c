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
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", *argc);

	return (0);
}
