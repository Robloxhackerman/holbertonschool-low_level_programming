#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int PEPE_ALL = 0, PEPE1 = 0, i = 0;

	if (b == NULL)
	{
		return (0);
	}	

	while (b[PEPE1])
	{
		PEPE1 = n % 10;
		PEPE_ALL = PEPE_ALL PEPE1 << i;
		n = n / 10;
		i++;
	}
	return (PEPE);
}
