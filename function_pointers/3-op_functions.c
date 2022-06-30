#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sumita
 * @a: int
 * @b: int
 * Return: result
 */
int op_add(int a, int b)
{
	int PEPESUM;

	PEPESUM = a + b;

	return (PEPESUM);
}

/**
 * op_sub - restita
 * @a: int
 * @b: int
 * Return: result
 */
int op_sub(int a, int b)
{
	int PEPERES;

	PEPERES = a - b;

	return (PEPERES);
}

/**
 * op_mul - multiplicacioncita
 * @a: int
 * @b: int
 * Return: result
 */
int op_mul(int a, int b)
{
	int PEPEMUL;

	PEPEMUL = a * b;

	return (PEPEMUL);
}

/**
 * op_div - divisionsita
 * @a: int
 * @b: int
 * Return: result
 */
int op_div(int a, int b)
{
	int PEPEDIV;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		PEPEDIV = a / b;

		return (PEPEDIV);
	}
}

/**
 * op_mod - restito
 * @a: int
 * @b: int
 * Return: result
 */
int op_mod(int a, int b)
{
	int PEPEROS;

	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		PEPEROS = a % b;

		return (PEPEROS);
	}
}
