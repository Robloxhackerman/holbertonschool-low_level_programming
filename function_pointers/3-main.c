#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	int PEPE1, PEPE2, PEPERESU;
	int (*PEPE_F)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	PEPE_F = get_op_func(argv[2]);

	if (!PEPE_F))
	{
		printf("Error\n");
		exit(99);
	}	
	
	PEPE1 = atoi(argv[1]);
	PEPE2 = atoi(argv[3]);
	PEPERESU = PEPE_F(PEPE1, PEPE2);
	printf("%d\n", PEPERESU);
	return(0);
}
