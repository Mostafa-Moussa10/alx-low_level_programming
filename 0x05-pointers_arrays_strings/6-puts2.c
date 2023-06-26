#include <stdio.h>
#include <string.h>

/**
 * puts2 - function to print all the other character of a string
 *
 * @str: pointer to the string
 */

void puts2(char *str)
{
	int len = strlen(str);
	int i = 0; /*counter*/

	while (i < len)
	{
		if (i % 2 == 0){
			printf("%c", str[i]);
		}
	i++;

	}
}

