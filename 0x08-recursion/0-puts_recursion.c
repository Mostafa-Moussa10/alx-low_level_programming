#include "main.h"

/**
 * _puts_recursion - function to print a string 
 *
 * @s: pointer to string
 */

void _puts_recursion(char *s)
{

	_putchar(_puts_recursion(s + i));

	if (s[i] != '\0')
	{
		return;
	}
	else
	{
		_putchar(s[0]);
		_puts_recursion(*(s + 1));
	}

}

