#include "main.h"

/**
 * leet - function to encode a string
 *
 * @s: pointer to a string
 *
 * Return: the updated string
 */

char *leet(char *s)
{
	/*counter*/
	int i = 0;
	int j = 0;
	/*strings to compare*/
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";


	while (s[i] != '\0')
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == s1[j])
			{
				s[i] = s2[j];
			}
		}
		i++;
	}
	return (s);
}

