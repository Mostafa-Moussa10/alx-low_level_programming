#include <stdio.h>

/**
 * main - function to print lower case alphabet
 *
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch);
	}

	/*new line*/
	putchar('\n');

	return (0);
}
