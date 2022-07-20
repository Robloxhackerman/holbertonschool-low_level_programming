#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 *
 * @n: num
 * @m: num
 *
 * Return: returns the number of bits you would need to
 * flip to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, i = 0;

	while (i != 64)
	{
		if ((n & 1) != (m & 1))
		{
			bits++;
		}

		n >>= 1;
		m >>= 1;
		i++;
	}
	return (bits);
}
