#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts a string to an integer
 *
 * @s: string to be converted
 * Return: the int converted from the string
 */
int _atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;
	while (s[len] != '\0')
		len++;
	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - multiplies 2 numbers
 *
 * @argc: num of args
 * @argv: args
 *
 * Return: 0 (success), 1 (very bad)
 */
int main(int argc, char *argv[])
{
	int PEPE1, PEPE2, PEPE_R;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		PEPE1 = _atoi(argv[1]);
		PEPE2 = _atoi(argv[2]);
		PEPE_R = PEPE1 * PEPE2;

		printf("%d\n", PEPE_R);

		return (0);
	}
}
