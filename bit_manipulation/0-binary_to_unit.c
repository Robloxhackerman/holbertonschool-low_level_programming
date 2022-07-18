#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	int PEPE1;
	unsigned int PEPE;

	for (PEPE1 = 0; b[PEPE1] != '0'; PEPE1++)
	{
		PEPE = PEPE + (b[PEPE1]*(2^PEPE1));
	}

	return (PEPE);
}

