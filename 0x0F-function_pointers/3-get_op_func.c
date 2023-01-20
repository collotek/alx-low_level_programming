#include "3-calc.h"

/**
 * get_op_func - should contain the function that selects the correct
 * function to perform the operation asked by the user
 * @s: struct s (int, int)
 * Return: NULL
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
	int k = 0;

	while (k < 5)
	{
		if (ops[k].op[0] == s[0])
			return (ops[k].f);
		k++;
	}
	return (NULL);
}
