#include "3-calc.h"

int (*get_op_func(char *s))(int, int)
{
	int PEPE;
	op_t PEPE_POP[] = {
		{43, op_add},
		{45, op_sub},
		{42, op_mul},
		{47, op_div},
		{37, op_mod},
	};

	PEPE = 0;

	while (PEPE_POP[PEPE].op)
	{
		if (*(ops[i].op) == *s && s[0] != '\0')
		{
			return (PEPE_POP[PEPE].f);
		}
		PEPE++;
	}
	return (0);
}
