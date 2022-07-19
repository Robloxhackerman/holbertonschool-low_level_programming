#include "main.h"

/**
 * clear_bit - returns the value of a bit at a given index
 *
 * @n: num
 * @index: index
 *
 * Return: return value of a bit or -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n)
	{
		if (index <= 64)
		{
			*n &= ~(1 << index);
			return (1);
		}
	}
	return (-1);
}
