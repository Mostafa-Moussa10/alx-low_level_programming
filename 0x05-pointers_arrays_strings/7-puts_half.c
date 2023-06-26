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

	while (i < len)
	{
		if (rem)
		{
			printf("%c", str[i + 1]);
		}
		else
		{

		}	printf("%c", str[i]);
		i++;
	}
	printf("\n");
}

