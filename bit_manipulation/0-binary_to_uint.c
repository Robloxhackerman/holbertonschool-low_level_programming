#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int PEPE = 0, PEPE1 = 0, PEPE_LEN = 0;

	if (b == NULL)
	{
		return (0);
	}	

	PEPE_LEN = strlen(b);

	while (b[PEPE1] != '\0')
	{
		if (b[PEPE1] != '0' || b[PEPE1] != '1')
		{
			return (0);
		}
		else if (b[PEPE1] == '1')
		{
			PEPE = PEPE + (2^PEPE_LEN)
		}
		PEPE1++;
		PEPE_LEN--;
	}
	return (PEPE);
}
