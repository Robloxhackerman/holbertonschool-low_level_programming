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
	if (index < 64)
	{
		return ((n & (1 << index)) >> index);
	}
	else
	{
		return (-1);
	}
}
