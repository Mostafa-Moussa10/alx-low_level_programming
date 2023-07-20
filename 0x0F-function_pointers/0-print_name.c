#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: pointer to person name
 * @f: pointer to function include the suffix
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
