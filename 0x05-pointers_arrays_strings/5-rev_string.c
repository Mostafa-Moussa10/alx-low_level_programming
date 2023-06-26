#include <stdio.h>
#include <string.h>

/**
 * rev_string - function to reverse a string
 *
 * @s: pointer to the string
 */

void rev_string(char *s)
{
	int i = 0; /*counter*/
	char str = 0;
	int len = strlen(s);

	while (i < len/2)
	{
	       str = s[i];
	       s[i] = s[len - i - 1];
	       s[len - i - 1] = str;
	       i++;
	}
}
