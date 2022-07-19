#include "main.h"

void print_binary(unsigned long int n)
{
	unsigned int PEPE_BI, PEPE;
	int PEPE1;

	while (n != 0)
	{
		PEPE = n % 2;
		n = n / 2;
		PEPE_BI = PEPE_BI + (PEPE * PEPE1);
		PEPE1 = PEPE1 * 10;
	}
	printf("%d", PEPE_BI);
}
