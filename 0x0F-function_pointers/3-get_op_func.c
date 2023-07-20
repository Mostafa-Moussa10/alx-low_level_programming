#include "calc.h"
#include "function_pointers.h"

/**
 * get_op_function - function to get the correct operation
 * @s: pointer to the operator type
 * Return: pointer to selelcted function
 */

int (*get_op_func(char *s))(int a, int b)
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

    while (*(ops[i]->op) != s && ops[i].op != NULL)
    {
	    i++;
    }

    return (ops[i].f);

}

