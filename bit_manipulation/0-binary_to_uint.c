#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int PEPE = 0;
	int PEPE1;

	if (b == NULL)
	{
		return (0);
	}	

	while (b[PEPE1] != '0' || b[PEPE1] != '1')
	{
		PEPE <<= 1;
		PEPE += b[PEPE1] - '0';
		PEPE1++;
	}
	return (PEPE1);
}
