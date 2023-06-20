#include "main.h"

/**
 * print_alphabet - function to print all  alphabet in lowercase
 *
 * Return: void
 */

void print_alphabet(void)
{
	char i = 0;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
