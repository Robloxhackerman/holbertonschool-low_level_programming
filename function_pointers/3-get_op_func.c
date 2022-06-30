#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - add
 * @s: operator
 * Return: always 0
 */
int (*get_op_func(char *s))(int, int)
{
	int PEPE;
	op_t PEPE_POP[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	PEPE = 0;

	while (PEPE_POP[PEPE].op)
	{
		if (*(PEPE_POP[PEPE].op) == *s && s[0] != '\0')
		{
			return (PEPE_POP[PEPE].f);
		}
		PEPE++;
	}
	return (0);
}
