#include "main.h"

/**
 * _puts_recursion - function to print a string
 *
 * @s: pointer to string
 */

void _puts_recursion(char *s)
{


	if (s[0] == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(s + 1);
	}

}

