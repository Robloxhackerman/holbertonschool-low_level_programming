#include "main.h"
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits = 0, i = 0;

	while (i !=64)
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
