#include <stdio.h>

/*
 * main - fuction to print numbers as character
 *
 * @ch: variable to carry the value of number
 *
 * Return: 0
 */

int main(void)
{
	int ch;

	for (ch = 0 ; ch < 10 ; ch++)
	{
		putchar(ch);
	}

	/*new line*/

	putchar('\n');

	return (0);
}
