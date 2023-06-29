#include "main.h"

/**
 * string_toupper - function to change all letters to upppercase
 *
 * @s: pointer to string
 *
 * Return: the resultant string
 */

char *string_toupper(char *s)
{
	int i = 0; /*counter*/

	
	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] + 'A' - 'a';
		}
		i++;
	}
	return (s);
}

