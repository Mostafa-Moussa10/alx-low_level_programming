#include "main.h"

/**
 * rot13 - function to encode a string with rot13
 *
 * @s: pointer to string
 *
 * Return: the resultant string
 */

char *rot13(char *s)
{
	char s1[] = "abcdefghijklm";
	char s2[] = "nopqrstuvwxyz";

	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
				break;
			}
			else if (s[i] == s2[j])
			{
				s[i] = s1[j];
				break;
			}

		}
		i++;
	}
	return (s);
}

