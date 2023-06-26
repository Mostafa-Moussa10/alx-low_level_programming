#include <stdio.h>
#include <string.h>

/**
 * puts_half - function to print second half of string
 *
 * @str: pointer to the string
 */

void puts_half(char *str)
{
	int i = 0; /*counter*/
	int len = strlen(str);
	int rem = len % 2;

	i = len / 2;

	if (rem)
	{
		while (i < len - 1)
		{
			printf("%c", str[i + 1]);
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			printf("%c", str[i]);
			i++;
		}
	}

	printf("\n");
}

