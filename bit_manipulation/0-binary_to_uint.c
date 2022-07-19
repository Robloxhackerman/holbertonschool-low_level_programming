#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int PEPE = 0, PEPE1 = 0, PEPE2 = 0;

	if (b == NULL)
	{
		return (0);
	}
	PEPE1 = strlen(b);

	while (PEPE1--)
	{
		if (b[PEPE1] != '0' || b[PEPE1] != '1')
		{
			return (0);
		}
		if (b[PEPE1] == '1')
		{
			PEPE = PEPE 1 << PEPE2;
		}
		PEPE2++;
	}
	return (PEPE);
}
