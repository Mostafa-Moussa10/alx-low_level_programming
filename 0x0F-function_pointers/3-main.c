#include "calc.h"
#include "function_pointers.h"
#include <stdio.h>
#include <strlib.h>

/**
 * main - function to run the program
 *
 * Return: always 1
 */

int main(int num1, int num2, char *op)
{
	int operation;
	char *res;

	operation = get_op_func(op)(num1, num2);

	res = atoi(operation);

	printf("%s\n", res);
	return (1);

}
