#include "main.h"

/**
 * _sqrt_recursion - the natural square root of a number
 *
 * @n: int
 *
 * Return: the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_pepon(n, 1));
}

/**
 * _pepon - recurse to find the square root
 *
 * @n:
 * @i:
 *
 * Return: square root
 */
int _pepon(int n, int i)
{
	int PEPE;

	PEPE = i * i;

	if (PEPE == n)
	{
		return (i);
	}

	return (_pepon(n, i +1));
}
