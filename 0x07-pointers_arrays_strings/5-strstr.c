#include "main.h"
#include <string.h>

/**
 * _strstr - function to find the first occurrnce of full string
 *
 * @haystack: pointer to the main string
 * @needle: pointer to the target string
 *
 * Return: pointer to the first to the beginning of target sring
 */

char *_strstr(char *haystack, char *needle)
{
	/*counters*/
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int k = 0;

	/*
	 * string length
	 */
	unsigned int len1 = strlen(haystack);

	while (i < len1)
	{
		if (needle[0] == haystack[i])
		{
			k = i;
			j = 0;
			while (needle[j] == haystack[k] && needle[j] != '\0')
			{
				k++;
				j++;
			}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
		}
		i++;
	}

	return (NULL);
}
