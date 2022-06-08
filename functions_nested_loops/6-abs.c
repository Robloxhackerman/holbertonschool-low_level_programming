#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an int
 *
 * @n: int to be checked
 *
 * Return: absolute valor of n
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}
