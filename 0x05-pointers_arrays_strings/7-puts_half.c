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

	if (len % 2 == 0)
	{
		len = len / 2;;
	}
	else
	{
		len = (len - 1) / 2;
	}

	while (i < len)
	{
		printf("%c", str[len + i]);
		i++;
	}
	printf("\n");
}

