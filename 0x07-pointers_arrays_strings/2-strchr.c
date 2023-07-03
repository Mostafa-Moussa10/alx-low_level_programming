#include "main.h"
#include <string.h>

/**
 * _strchr - function to find the first occurrence of a character
 *
 * @s: pointer to the string
 * @c: the character which is looked for
 *
 * Return: pointer to the character location or NULL
 */

char *_strchr(char *s, char c)
{
	/*counter*/
	unsigned int len = strlen(s);
	unsigned int i = 0;

	while (i < len)
	{
		if (s[i] == c)
		{
			return (*(s + i);
		}
		i++;
	}
	return (NULL);
}
