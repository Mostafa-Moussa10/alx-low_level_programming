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
		if (s[i] >= 'a' && s[i] <= 'z')
		{
		}
		else if (s[i] >= 'A' && s[i] <= 'Z')
		{
		}
		else if (s[i] == '\\' && s[i +1] == 'n')
		{
			s[i + 2] = s[i + 2] + 'A' - 'a';
			i++;
		}
		else
		{
			while (s[]
			s[i + 1] = s[i + 1] + 'A' - 'a';
		}
		i++;
	}
	return (s);
}

/**
 * letter - function to check if the element is letter or not
 *
 * @s: pointer to string
 *
 * Return: 1 if letter , 0 if not
 */


