#include "3-calc.h"
#include <stdio.h>

int op_add(int a, int b)
{
	int PEPESUM;

	PEPESUM = a + b;

	return (PEPESUM);
}

int op_sub(int a, int b)
{
	int PEPERES;

	PEPERES = a - b;

	return (PEPERES);
}

int op_mul(int a, int b)
{
	int PEPEMUL;

	PEPEMUL = a * b;

	return (PEPEMUL);
}

int op_div(int a, int b)
{
	int PEPEDIV;

	if (b == 0)
	{
		printf("Error\n");
		exit();
	}
	else
	{
		PEPEDIV = a / b;
		
		return (PEPEDIV);
	}
}

int op_mod(int a, int b)
{
	int PEPEROS;

	if (b == 0)
	{
		printf("Error\n");
		exit();
	}
	else
	{
		PEPEROS = a % b;
		
		return (PEPEROS);
	}
}
