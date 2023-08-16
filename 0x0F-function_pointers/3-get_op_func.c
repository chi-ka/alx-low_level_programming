#include <stdio.h>
#include "3-calc.h"

/**
 * get_op_func - Selects the correct function for the given operator.
 * @s: The operator as a string.
 *
 * Return: A pointer to the corresponding operation function,
 *         or NULL if the operator is not recognized.
 */

int (*get_op_func(char *s))(int, int)
{
	return  (s[0] == '+' ? op_div :
                s[0] == '-' ? op_sub :
                s[0] == '*' ? op_mul :
                s[0] == '/' ? op_div :
                s[0] == '%' ? op_mod : NULL;
}

