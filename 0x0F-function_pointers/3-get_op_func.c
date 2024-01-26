#include "3-calc.h"

/**
 * get_op_func - function pointer that selects the correct function to perform
 * the operation asked by the user
 * @s: the operator
 *
 * Return: pointer to the function that corresponds to the
 * operator given as a parameter
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
	int n;

	n = 0;

	while (ops[n].op)
	{
		if (strcmp(ops[n].op, s) == 0)
			return (ops[n].f);
		n++;
	}

	return (NULL);
}
