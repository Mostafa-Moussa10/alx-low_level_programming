#include "main.h"

/**
 * main - function to print all  alphabet in lowercase
 *
 * Return: 0
 */

int main(void)
{
	print_alphabet();

	return (0);
}

void print_alphabet(void)
{
	char i = 0;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
