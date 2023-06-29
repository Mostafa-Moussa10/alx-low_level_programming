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
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
		}
		else
		{
			s[i + 1] = s[i + 1] + 'A' - 'a';
		}
		i++;
	}
	return (s);
}

