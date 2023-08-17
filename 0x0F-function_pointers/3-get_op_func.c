#include "3-calc.h"
#include <stdlib.h>
/**
 * get_op_func - Selects the correct func to perform operation by the user.
 * @s: The operator advanced as argument.
 * Return: A pointer to the func communicate to the operator as a parameter.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int q = 0;

	while (ops[q].op != NULL && *(ops[q].op) != *s)
		q++;

	return (ops[q].f);
}
