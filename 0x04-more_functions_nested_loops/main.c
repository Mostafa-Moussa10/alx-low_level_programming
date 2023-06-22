#include "main.h"

int main(void)
{
	 print_diagonal(0);
	 print_diagonal(2);
	 print_diagonal(10);
	 print_diagonal(-4);
	return (0);
}

/**
 * print_diagonal - print a diagonal line
 * @n: length of the line
 */

void print_diagonal(int n)
{
        int i = 0;
        int j = 0;

        if (n <= 0)
        {
                _putchar('\n');
        }
        else
        {
                for (i = 0; i < n; i++)
                {
                        while (j < i)
                        {
                                _putchar(' ');
                                j++;
                        }
                        _putchar(92);
                        _putchar('\n');
                }
        }
}
#include <unistd.h>

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
