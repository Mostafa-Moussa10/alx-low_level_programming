#include "main.h"

/**
 * cap_string - function to change all letters to upppercase
 *
 * @s: pointer to string
 *
 * Return: the resultant string
 */

char *cap_string(char *s)
{
	int i = 0; /*counter*/

	while (s[i] != '\0')
	{
		while (!(s[i] >= 'a' && s[i] <= 'z'))
		{
			i++;
		}

		if (s[i - 1] == ' ' || s[i -1] == '\t' || s[i -1] == '\n' || s[i -1] == ',' || s[i -1] == ';' || s[i -1] == '.' || s[i -1] == '!' || s[i -1] == '?' || s[i -1] == '"' || s[i -1] == '(' || s[i -1] == ')' || s[i -1] == '{' || s[i -1] == '}' || s[i -1] == 0)
		{
			s[i] = s[i] - 'a' + 'A';
		}
		i++;
	}

	return (s);
}


