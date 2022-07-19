#include "main.h"

/**
 * set_bit - returns the value of a bit at a given index
 *
 * @n: num
 * @index: index
 *
 * Return: return value of a bit or -1 if fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = (1 << index), cp = *n;

	if (n)
	{
		if (index <= 64)
		{
			*n = num | cp;
			return (1);
		}
	}
	return (-1);
}
