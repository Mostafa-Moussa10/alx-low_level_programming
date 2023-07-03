#include "main.h"
#include <string.h>

/**
 * _strpbrk - function to detect the first occurrence of character
 *
 * @s: pointer to the main function
 * @accept: pointer to the searched characters
 *
 * Return: pointer to the first occurrence
 */

char *_strpbrk(char *s, char *accept)
{

	/*counter*/
	unsigned int i = 0;
	unsigned int j = 0;

	unsigned int len1 = strlen(s);
	unsigned int len2 = strlen(accept);

	while (i < len1)
	{
		for (j = 0; j < len2; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
		i++;
	}
	return (NULL);
}

