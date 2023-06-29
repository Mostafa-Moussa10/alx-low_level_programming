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
		if !((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			while (s[i] != '\0')
			{
				i++;
				if (s[i] >= 'A' && s[i] <= 'Z')
				{
					break;
				}
				else if (s[i] >= 'a' && s[i] <= 'z')
				{
					s[i] = s[i] - 'a' + 'A';
					break;
				}
			}
		}
		i++;
	}

	return (s);
}


