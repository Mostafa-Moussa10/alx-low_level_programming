#include "main.h"

int main(void)
{

	double x = 612852475143;
	more_numbers();

	return (0);
}

/**
 * more_numbers - function to print the numbers for 0 to 14 for 10 times
 */


void more_numbers(void)
{
        int i = 0;
        int y = 0;

        while (y < 11)
        {
                for (i = 0; i < 15; i++)
                {
                        if (i > 9)
                        {
                                _putchar('0' + i / 10);
                        }
                        _putchar('0' + i % 10);
                }
        _putchar('\n');
        y++;
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
