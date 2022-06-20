#include "main.h"

/**
 * is_prime_number - check if an int is a prime number
 *
 * @n: num to check
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (_pepon(n, n - 1));
}

/**
 * _pepon - calculate if a number is prime
 *
 * @n: num to check
 * @i: int
 *
 * Return: 1 if n is prime, 0 if not
 */
int _pepon(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}

	if (n % i == 0 && i > 0)
	{
		return (0);
	}

	return (_pepon(n, i - 1));
}
