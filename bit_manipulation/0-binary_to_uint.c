#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int PEPE = 0, PEPE1 = 0, PEPE_LEN = 0;

	if (b == NULL)
	{
		return (0);
	}	

	while (b[PEPE1])
	{
		if (b[PEPE1] != '1' || b[PEPE1] != '0')
		{
			return (0);
		}
		else
		{
			PEPE = PEPE + (2^PEPE_LEN);
		}
		PEPE1++;
		PEPE_LEN--;
	}
	return (PEPE);
}
