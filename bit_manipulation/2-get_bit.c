#include "main.h"

/**
 * get_bit - return a bit
 *
 * @n: num
 * @index: index
 *
 * Return: return a bit
 */
int get_bit(unsigned long int n, unsigned int index)
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
