#include "function_pointers.h"

/**
 * print_name - function to print a name
 * @name: pointer to person name
 * @f: pointer to function include the suffix
 */

void print_name(char *name, void (*f)(char *))
{
	int i = 0;
	char *p;

	p = f(name);

	while (p[i] != '\0')
	{
		_putchar(p[i]);
		i++;
	}
}


