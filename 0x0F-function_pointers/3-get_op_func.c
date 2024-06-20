#include "3-calc.h"
#include <string.h>
#include <stdlib.h>

/**
 * get_op_func - function to match func
 * @s: operator
 * Return: ptr to func
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;
	while (i < 6)
	{
		if (ops[i].op && strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

