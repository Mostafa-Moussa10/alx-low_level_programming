#include <stdio.h>
#include <string.h>

/**
 * print_rev - function to print the revesed string
 *
 * @s: pointer to the string
 */

void print_rev(char *s)
{
	int len = strlen(s);
	int i = 0; /*counter*/
	char *str;

	while (i < len)
	{
		str[i] = s[len - i - 1];
		i++;
	}	
	printf("%s\n", str);
}

