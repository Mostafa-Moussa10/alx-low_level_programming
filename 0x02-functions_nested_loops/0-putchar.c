#include "main.h"
#include <unistd.h>

/**
 * main - function to start the project
 *
 * Return: 0
 */

int main(void)
{
	char c = 'c';
	_putchar(c);

	return (0);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
