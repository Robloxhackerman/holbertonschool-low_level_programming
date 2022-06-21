#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount of money.
 *
 * @argc: num of args
 * @argv: args
 *
 * Return: 0 if no errors, else 1
 */
int main(int argc, char *argv[])
{
	int PEPE_1, PEPE1, PEPE_2;
	int PEPE_A[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error");
		return (1);
	}
	
	PEPE_1 = atoi(argv[1]);
	
	if (PEPE_1 <= 0)
	{
		printf("0");
		return (1);
	}
	else
	{
		for (PEPE1 = 0; PEPE1 < 5; PEPE1++)
		{
			if (PEPE_1 >= PEPE_A[PEPE1])
			{
				PEPE_R = PEPE_1 / PEPE_[PEPE1];
				PEPE_2++;
			}
			else
				PEPE1++;
		}
	}
	
	printf("%d\n", PEPE_2);
	return (0);
}
