#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{
	int PEPE;
	op_t PEPE_POP[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
	};

	PEPE = 0;

	while (PEPE_POP[PEPE].op)
	{
		if (*(PEPE_POP[i].op) == *s && s[0] != '\0')
		{
			return (PEPE_POP[PEPE].f);
		}
		PEPE++;
	}
	return (0);
}
